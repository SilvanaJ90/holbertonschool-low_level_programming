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
	unsigned long int i = 0;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	free(table->array);
	free(table);
	return (table);
}
