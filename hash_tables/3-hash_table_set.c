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
	hash_node_t *newNode = NULL;

	if (!ht || !key || !value)
		return (0);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	return (1);
}
