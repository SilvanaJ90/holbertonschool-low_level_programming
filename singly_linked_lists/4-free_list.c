#include "lists.h"
#include <stdlib.h>

/**
 * free_list - check code
 * @head: value
 * Return: free(ptr)
 */

void free_list(list_t *head)
{
	list_t *temp;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
