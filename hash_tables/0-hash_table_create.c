#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - check code
 * @size: size of the array
 * Return: pointer to the newly create hash table or NULL is failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	free(table->array);
	free(table);
	return (table);
}
