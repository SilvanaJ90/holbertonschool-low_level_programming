#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - check code
 * @dlistint_t: value
 * @h: pointer
 * Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
