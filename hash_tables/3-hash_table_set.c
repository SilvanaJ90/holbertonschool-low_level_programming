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
	hash_node_t *newNode = NULL, *item = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (!ht || strlen(key) == 0 || !key)
		return (0);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	newNode = ht->array[index];
	temp = newNode;
	if (!newNode)
	{
		item = create_item(key, value);
		if (!item)
			return (0);
		/*item->next = newNode;*/
		ht->array[index] = item;
		return (1);
	}
	while (temp)
	{
		if (strcmp(temp->key, key) == 1)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		temp = temp->next;
	}
	item =  create_item(key, value);
	if (!item)
		return (0);
	item->next = newNode;
	newNode = item;
	return (1);
}
