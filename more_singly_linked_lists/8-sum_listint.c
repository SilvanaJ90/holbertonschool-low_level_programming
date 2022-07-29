#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - check code
 * @head: pointer head
 * Return: sum
 */

int sum_listint(listint_t *head)
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
