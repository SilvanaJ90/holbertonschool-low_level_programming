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
	list_t *ptr =(list_t *)malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	*head = ptr;
	free(ptr);
	return (ptr);
}
