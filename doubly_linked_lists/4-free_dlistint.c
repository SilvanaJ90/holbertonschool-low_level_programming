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
	dlistint_t *temp, *newNode;

	temp = head;
	while (temp)
	{
		newNode = temp->next;
		free(temp->next);
		free(temp);
		temp = newNode;
	}
	head = NULL;
}
