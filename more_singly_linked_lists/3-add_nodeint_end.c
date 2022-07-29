#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - check code
 * @head: pointer
 * @n: value
 * Return: pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = *head;
	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		retunr (ptr);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (ptr);
}
