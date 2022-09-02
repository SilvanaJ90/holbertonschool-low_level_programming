#include "hash_tables.h"

/**
 * hash_table_delete - check code
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;

	if (!ht || !ht->array)
		return;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			item = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = item;
		}
	}
	free(ht->array);
	free(ht);
}
