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
	dlistint_t *temp = *head;
	dlistint_t *temp2 = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index != 0)
	{
		for(i = 0; (i < index) && (temp->next != NULL); i++)
			temp = temp->next;
		if (index > i)
			return (-1);
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
	}
	*head = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	temp = NULL;
	return (1);
}
