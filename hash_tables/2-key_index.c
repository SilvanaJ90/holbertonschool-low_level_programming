#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * key_index - check code
 * @key: value key
 * @size: size of the array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2((unsigned char *)key);

	return (idx % size);
}
