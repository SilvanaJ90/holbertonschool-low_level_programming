#include "hash_tables.h"

hash_node_t *create_item(const char *key, const char * value)
{
	hash_node_t *item = (hash_node_t*) malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = (char*) malloc (strlen(key) + 1);
	item->value = (char*) malloc (strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * hash_table_create - check code
 * @size: size of the array hash table
 * Return: new pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
