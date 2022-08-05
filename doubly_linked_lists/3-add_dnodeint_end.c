#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * add_dnodeint_end - check code
 * @head: doble pointer
 * @n: data
 * Return: pointer
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newNode;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
