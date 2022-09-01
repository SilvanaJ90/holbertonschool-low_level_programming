
#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

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
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table.
 * @key: Key to be indexed.
 * @value: Value to set in the hash table.
 *
 * Return: 1 if works, 0 if doesn't.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *newNode;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
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
