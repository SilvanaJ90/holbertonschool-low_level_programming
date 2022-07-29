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
	listint_t *currentNode;

		if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		currentNode = *head;
		*head = currentNode->next;
		free(currentNode);
	}
	head = NULL;
}
