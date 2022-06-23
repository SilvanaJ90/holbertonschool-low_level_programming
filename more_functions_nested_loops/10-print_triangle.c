#include "main.h"

/**
 * print_triangle - checks
 *
 * @size: value
 *
 */


void print_triangle(int size)
{
	int i;
	int j;
	int k;

	k = 0;
	j = size - 1;
	while (k < size)
	{
		j = size - 1 - k;
		i = k + 1;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}

		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		k++;
	}
	if (size <= 0)
	_putchar('\n');
}
