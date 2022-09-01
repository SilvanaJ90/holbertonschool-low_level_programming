#include "hash_tables.h"

/**
 * hash_table_set - check code
 * @ht: value hash table
 * @key: value key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */


static LinkedList_t  *allocate_list ()
{
    LinkedList_t *list = malloc (sizeof(LinkedList_t));
    return (list);
}

void collision(hash_table_t *ht, unsigned long int index, hash_node_t *item)
{
    LinkedList_t* head = ht->overflow_buckets[index];

	if (head == NULL)
	{
		head = allocate_list();
		head->item = item;
		ht->overflow_buckets[index] = head;
		return;
	}
	else
	{
		ht->overflow_buckets[index] = head;
		return;
	}
}

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
	newNode = ht->array[index];
	if (newNode == NULL)
	{
		if (ht->count == ht->size)
			free(item);
		newNode = ht->array[index];
		item->next = newNode;
		ht->array[index] = item;

	}
	else
	{
		if (strcmp(newNode->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		collision(ht, index, item);
	}
	return (1);
}
