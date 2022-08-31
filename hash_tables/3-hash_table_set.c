#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - check code
 * @ht: value hash table
 * @key: value key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *keyDup = NULL, *valueDup = NULL;
	hash_node_t *item = NULL, *current_item = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);

	keyDup = strdup(key);
	valueDup = strdup(value);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = keyDup;
	item->value = valueDup;
	item->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		current_item = ht->array[index];
		while (current_item)
		{
			if (strcmp(current_item->key, keyDup) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = valueDup;
				free(keyDup);
				free(item);
				return (1);
			}
			current_item = current_item->next;
		}
		current_item = ht->array[index];
		item->next = current_item;
		ht->array[index] = item;
	}
	else
		ht->array[index] = item;
	return (1);
}
