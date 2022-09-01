#include "hash_tables.h"

/**
 * hash_table_set - check code
 * @ht: value hash table
 * @key: value key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

void free_item(hash_node_t *item) {
    free(item->key);
    free(item->value);
    free(item);
}

hash_node_t *create_item(const char *key, const char * value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup((char *)key);
	item->value = strdup((char *)value);
	item->next = NULL;
	return (item);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL, *item = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
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
			free_item(item);
			return (1);
		}
		while (newNode->next !=NULL && strcmp(newNode->next->key, key) != 0)
			newNode = newNode->next;
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
	return (1);
}
