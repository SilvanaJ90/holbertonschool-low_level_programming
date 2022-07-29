#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - check code
 * @head: pointer
 * Retunt: NULL;
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode, *nextNode;

	currentNode = *head;
	if (head == NULL || *head == NULL)
		return;
	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
	*head = NULL;
}
