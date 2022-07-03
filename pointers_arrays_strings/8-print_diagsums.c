#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check code
 * @size: numbers element
 * @a: array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1, d2 = 0;
	int result = 0;

	for (i = 0; i < size; i++)
	{
		d1 = (i * size) + i;
		d2 += *(a + d1);
	}
		for (j = 0; j < size; j++)
		{
			d1 = (j * size) + (size - 1 - j);
			   result += *(a + d1);
		}
		printf("%i, %i\n", d2, result);
}
