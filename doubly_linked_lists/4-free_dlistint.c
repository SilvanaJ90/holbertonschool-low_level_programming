#include "lists.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * free_dlistint - check code
 * @head: pointer head
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *newNode;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		newNode = head;
		head = newNode->next;
		free(newNode);
	}
	head = NULL;
}
