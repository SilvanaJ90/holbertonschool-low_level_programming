#include "lists.h"

/**
 * print_list - check code
 * list_t: struct list
 * @h: value poineter
 * Return: number value i
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
