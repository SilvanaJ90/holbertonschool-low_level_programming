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
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (item != NULL)
		{
			printf("'%s':''%s'", item->key, item->value);
			/*item = item->next;*/
		}
		return;
	}
	printf("}\n");
}
