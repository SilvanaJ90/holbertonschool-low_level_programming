#include "hash_tables.h"

/**
 * hash_table_print - check code
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;
	int flag = 1;

	if (!ht || !ht->array)
		return;
	item = ht->array[i];
	for (i = 0; i < ht->size; i++)
	{
		if (item != NULL)
		{
			if(flag == 1)
				printf(", ");
			printf("%s%s\n", item->key, item->value);
			flag = 1;
			item = item->next;
		}
		return;
	}
	printf("\n");
}
