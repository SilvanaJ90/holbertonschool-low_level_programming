#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check code
 * @head: pointer head
 * Return: pointer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
