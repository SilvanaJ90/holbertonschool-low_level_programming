#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - check code
 * @head: pointer
 * Return: i
 */

size_t print_listint_safe(const listint_t *head)
{
	int i;

	for (i = 0; head != NULL; i++)
	{
		printf("[%d]\n", head->n);
		h = h->next;
	}
	return (i);
}
