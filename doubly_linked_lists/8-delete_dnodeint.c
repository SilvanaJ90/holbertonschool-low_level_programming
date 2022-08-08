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
	unsigned int i = 0;

	if (!head || !temp)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		if (*head)
			(*head)->prev = NULL;
		return (-1);
	}
	for (i = 0; temp; i++)
	{
		if (i == index)
		{
			if (temp->next)
			{
				(temp->prev)->next = temp->next;
				(temp->next)->prev = temp->prev;
				free(temp);
				return(1);
			}
			else
			{
				(temp->prev)->next = NULL;
				free(temp);
				return(1);
			}
		}
		temp = temp->next;
	}
	return (1);
}
