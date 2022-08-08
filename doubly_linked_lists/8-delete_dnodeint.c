#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - check code
 * @head: pointer value
 * @index: index node starts 0
 * Return: 1 if it succeede, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempNode = *head;
	dlistint_t *nextNode;
	dlistint_t *prevNode = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	for (i = 0; tempNode && i < index; i++)
	{
		prevNode = tempNode;
		tempNode = tempNode->next;
	}
	if (tempNode == NULL)
		return (-1);
	nextNode = tempNode->next;
	if (prevNode == NULL)
	{
		free(tempNode);
		if (nextNode != NULL)
		{
			nextNode->prev = NULL;
			*head = nextNode;
		}
		else
		{
			*head = NULL;
		}
	}
	else if (nextNode == NULL)
	{
		prevNode->next = NULL;
		free(tempNode);
	}
	else
	{
		prevNode->next = nextNode;
		nextNode->prev = prevNode;
		free(tempNode);
	}
	return (1);
}
