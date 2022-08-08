#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - check code
 * @h: pointer
 * @idx: index newNode starting 0
 * @n: date
 * Return: pointer newnode or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	temp = *h;
	if (newNode == NULL)
		return (NULL);
	return (newNode);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = temp;
		*h = newNode;
		return (*h);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
