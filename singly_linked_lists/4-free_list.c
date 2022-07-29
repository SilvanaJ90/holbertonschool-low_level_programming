#include "lists.h"
#include <stdlib.h>

/**
 * free_list - check code
 * @head: value
 * Return: free(ptr)
 */

void free_list(list_t *head)
{
	while (head->next != NULL)
		free(head);
}
