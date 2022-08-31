#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - check code
 * @size: size of the array hash table
 * Return: new pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
