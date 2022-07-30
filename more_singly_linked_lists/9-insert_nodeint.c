#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - check code
 * @head: pointer
 * @idx: position Node
 * @n: data
 * Return: newNode or NULL;
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;
		return (*head);
	}

	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
