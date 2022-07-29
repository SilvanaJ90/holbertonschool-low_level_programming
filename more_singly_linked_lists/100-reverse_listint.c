#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - check code
 * @head: pointer
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode, *prevNode, *currentNode;

	prevNode = NULL;
	currentNode = *head;
	nextNode = NULL;
	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	*head = prevNode;
	return (*head);
}
