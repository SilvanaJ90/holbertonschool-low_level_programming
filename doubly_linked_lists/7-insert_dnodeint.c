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
	dlistint_t *newP = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;

	newP = malloc(sizeof(dlistint_t));
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	*h = temp;
	return (*h);

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	temp2 = temp->next;
	temp->next = newP;
	temp2->prev = newP;
	newP->next = temp2;
	newP->prev = temp;
	return (*h);
}
