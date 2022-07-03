#include "main.h"

/**
 * print_diagsums - check code
 * @a: array
 * @size: numbers element
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int suma1 = 0;
	int suma2 = 0;

	for (i = 0; i < size; i++);
	{
		for (j = 0; j < size; j++)
		{
			if (i = j)
			{
				suma1 = suma1 + a[i][j];
			}
		}
	}
	printf("%d, ", suma1);

	for (j = 0; j < size; j++)
	{
		i = size - 1;
		suma2 = suma2 + a[i][j];
	}
	printf("%d, ", suma2);
}
