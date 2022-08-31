#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_item - check code
 * @key: key
 * @value: value
 * Return: pointer to the newly create hash table or NULL is failure
 */

hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	free(item->key);
	free(item->value);
	free(item);
	return (item);
}

/**
 * hash_table_create - check code
 * @size: size of the array
 * Return: pointer to the newly create hash table or NULL is failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	free(table->array);
	free(table);
	return (table);
}
