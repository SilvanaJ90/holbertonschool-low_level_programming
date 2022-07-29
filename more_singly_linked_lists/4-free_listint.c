#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - check code
 * @head: pointer
 * Retunt:
 */

void free_listint(listint_t *head)
{
	listint_t *currentNode;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		currentNode = head;
		head = currentNode->next;
		free(currentNode);
	}
	head = NULL;
}
