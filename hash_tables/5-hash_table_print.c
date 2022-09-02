#include "hash_tables.h"

/**
 * hash_table_print - check code
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;
	int flag = 0;
	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			flag = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
