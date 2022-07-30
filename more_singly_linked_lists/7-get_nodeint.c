#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

/**
 * get_nodeint_at_index - check code
 * @head: pointer
 * @index: value
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode = head;
	unsigned int count = 0;

	while (currentNode != NULL)
	{
		if (count == index)
			return (currentNode);
		count++;
		currentNode = currentNode->next;
	}
	return (NULL);
}
