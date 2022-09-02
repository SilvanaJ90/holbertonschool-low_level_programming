#include "hash_tables.h"

/**
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table.
 * @key: Key to be indexed.
 * @value: Value to set in the hash table.
 *
 * Return: 1 if works, 0 if doesn't.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *item = NULL, *newNode = NULL;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = create_item(key, value);
	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else
	{
		newNode = ht->array[index];
		if (strcmp(newNode->key, key) == 0)
		{
			item->next = newNode->next;
			ht->array[index] = item;
			free_item(newNode);
			return (1);
		}
		while (newNode->next != NULL && strcmp(newNode->next->key, key) != 0)
		{ newNode = newNode->next;
		}
		if (strcmp(newNode->key, key) == 0)
		{
			item->next = newNode->next->next;
			free_item(newNode->next);
			newNode->next = item;
		}
		else
		{
			item->next = ht->array[index];
			ht->array[index] = item;
		}
	}
	return (1);
}
