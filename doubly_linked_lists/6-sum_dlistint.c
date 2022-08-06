#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - check code
 * @head: pointer head
 * Return: suma
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
	printf("sum = %d", sum);
}
