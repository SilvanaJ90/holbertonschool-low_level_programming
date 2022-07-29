#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - check code
 * @head: pointer first  likend list
 * @str: pointer the functions
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	temp = *head;
	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
		free(ptr);
	ptr->len = strlen(ptr->str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
