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

	if (!ht || !key || !value)
		return (0);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	item = create_item(key, value);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		newNode = ht->array[index];
		while (newNode)
		{
			if (strcmp(newNode->key, key) == 0)
			{
				free(ht->array[index]->value);
				strcpy(ht->array[index]->value, value);
				free_item(item);
				return (1);
			}
			newNode = newNode->next;
		}
		newNode = ht->array[index];
		item->next = newNode;
		ht->array[index] = item;
	}
	else
		ht->array[index] = item;
	return (1);
}
