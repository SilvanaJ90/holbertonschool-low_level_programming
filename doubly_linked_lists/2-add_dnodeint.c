#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * add_dnodeint - check code
 * @head: doble pointer
 * @n: data
 * Return: pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev=newNode;
	*head = newNode;
	return (newNode);
}
