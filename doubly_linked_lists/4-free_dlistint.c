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
	dlistint_t *temp;
	temp = head;
	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		free(temp);
		head = temp;
	}
}
