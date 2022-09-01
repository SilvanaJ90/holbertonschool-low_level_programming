#include "hash_tables.h"


/**
 * hash_table_get - check code
 * @ht: table
 * @key: key
 * Return: value o NULL if faile
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (!ht || !key)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
