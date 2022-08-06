#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - check code
 * @head: pointer head
 * @index: index node starting 0
 * Return: newNode o NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *newNode = head;
	unsigned int count = 0;

	while (newNode != NULL)
	{
		if (count == index)
			return (newNode);
		count++;
		newNode = newNode->next;
	}
	return (NULL);
}
