#include "hash_tables.h"

/**
 * hash_table_set - check code
 * @ht: value hash table
 * @key: value key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL, *item = NULL;
	unsigned long int index = 0;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	item = create_item(key, value);
	newNode = ht->array[index];
	item->next = newNode;
	ht->array[index] = item;
	return (1);
}
