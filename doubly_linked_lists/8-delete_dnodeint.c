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
	dlistint_t *prev, *temp;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	while (i != index && *head != NULL)
	{
		prev = *head;
		head = &(*head)->next;
		i++;
	}
	if (*head != NULL)
	{
		temp = *head;

		if (index == 0)
		{
			*head = (*head)->next;
		}
		else
		{
			prev->next = (*head)->next;
		}
		        free(temp);
			return (1);
	}
	return (-1);
}
