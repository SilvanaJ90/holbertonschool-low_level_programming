#include "hash_tables.h"

/**
 * hash_table_print - check code
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item != NULL)
			printf("'%s':''%s'", item->key, item->value);
		return;
			/*item = item->next;*/
	}
	printf("}\n");
}
