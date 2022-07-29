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
	list_t *temp, *ptr;
	temp = head;

	while(temp)
	{
		ptr = temp->next;
		free(temp);
		temp = ptr;
	}
	head = NULL;
}
