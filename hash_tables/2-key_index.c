#include "hash_tables.h"

/**
 * key_index - check code
 * @key: value key
 * @size: size to the size hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int idx = hash_djb2(key);

	return (idx % size);
}
