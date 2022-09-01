#include "hash_tables.h"

/**
 * hash_table_print - check code
 * @ht: hash table
 * Return:
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return;
	if (ht->array[i] != NULL)
		printf("%s%s\n", ht->array[i]->key, ht->array[i]->value);
}
