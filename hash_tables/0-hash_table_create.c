#include "hash_tables.h"

/**
 * free_item - check code.
 * @item: node.
 * Return: Void.
 */

void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * create_item - check code
 * @key: key
 * @value: value
 * Return: new pointer
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (0);
	item->key = strdup((char *)key);
	item->value = strdup((char *)value);
	item->next = NULL;
	return (item);
}

/**
 * hash_table_create - check code
 * @size: size of the array hash table
 * Return: new pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	return (ht);
}
