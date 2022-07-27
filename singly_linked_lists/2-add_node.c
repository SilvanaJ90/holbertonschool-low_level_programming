#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
		list_t *ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
				return (NULL);
		ptr->str = strdup(str);
		ptr->len = strlen(ptr->str);
		ptr->next = *head;
		*head = ptr;
		return (ptr);
}
