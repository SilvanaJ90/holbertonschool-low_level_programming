#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - check code
 * @h: pointer
 * Return: i
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
