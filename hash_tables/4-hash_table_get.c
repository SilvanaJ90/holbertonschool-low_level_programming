#include "hash_tables.h"


/**
 * hash_table_get - check code
 * @ht: table
 * @key: key
 * Return: value o NULL if faile
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *newNode;
	char *value;

	if (!ht || !key)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	/*Searches the key in the hashtable and returns NULL if it doesn't exis*/
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	newNode = ht->array[index];
	/* Ensure that we move to a non NULL item*/
	while (!value)
	{
		if (strcmp(newNode->key, key) == 0)
			value = newNode->value;
		newNode = newNode->next;
	}
	return (value);
}
