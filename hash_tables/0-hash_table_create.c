#include "hash_tables.h"

/**
 * hash_table_create - check code
 * @size: size of the array
 * Return: pointer to the newly create hash table or NULL is failure
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
		return (NULL);
	item->key = malloc (strlen(key) + 1);
	item->value = malloc (strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}


/**
 * hash_table_create - check code
 * @size: size of the array hash table
 * Return: new pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc (sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	return (ht);
}
