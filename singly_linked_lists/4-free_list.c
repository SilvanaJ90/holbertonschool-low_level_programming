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
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		free(ptr);
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
