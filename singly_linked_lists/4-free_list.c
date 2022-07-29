#include "lists.h"
#include <stdlib.h>

/**
 * free_list - check code
 * @head: value
 * Return: free(ptr)
 */

void free_list(list_t *head)
{
	list_t *tmp;
	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		free(head->str);
	}
}
