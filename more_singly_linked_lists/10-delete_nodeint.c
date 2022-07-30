#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - check code
 * @head: pointer
 * @index: position
 * Return: NULL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextNode, *temp = *head;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}
	nextNode = temp->next;
	temp->next = nextNode->next;
	free(nextNode);
	return (1);
}
