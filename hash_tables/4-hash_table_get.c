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
	hash_node_t *item = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	item = ht->array[index];
	/*Ensure that we move to items which are not NULL*/
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
