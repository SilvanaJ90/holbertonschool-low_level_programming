#include "lists.h"
#include <stdio.h>

/**
 * print_listint - check code
 * @h:value
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n, h->len, h->str");
		h = h->next;
	}
	return (i);
}
