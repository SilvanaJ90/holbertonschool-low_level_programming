#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - check code
 * @head: value
 * Return: free(ptr)
 */

void free_list(list_t *head)
{
	list_t *currentNode, *nextNode;

	currentNode = head;
	while (currentNode)
	{
		nextNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = nextNode;
	}
	head = NULL;
}
