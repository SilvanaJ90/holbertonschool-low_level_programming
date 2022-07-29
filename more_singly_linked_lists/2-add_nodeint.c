#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - check code
 * @head: pointer
 * @n: value
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
