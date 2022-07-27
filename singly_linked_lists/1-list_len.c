#include "lists.h"

/**
 * list_len - check code
 * list_t: struct list
 * @h: value poineter
 * Return: number value i
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
