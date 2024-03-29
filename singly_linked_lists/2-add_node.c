#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - check code
 * @head: pointer first  likend list
 * @str: pointer the functions
 * Return: pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
		free(ptr);
	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
