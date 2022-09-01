#include "hash_tables.h"

/**
 * hash_table_create - check code
 * @size: size of the array hash table
 * Return: new pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = NULL;

	ht = malloc (sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
