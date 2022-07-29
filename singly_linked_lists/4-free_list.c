#include "lists.h"
#include <stdlib.h>

/**
 * free_list - check code
 * @head: value
 * Return: free(ptr)
 */

void free_list(list_t *head)
{
	if(head) {
        free_list(head->next);
		free(head);
    }
}
