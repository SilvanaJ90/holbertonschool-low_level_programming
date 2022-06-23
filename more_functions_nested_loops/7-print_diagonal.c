#include "main.h"

/**
 * print_diagonal - checks
 *
 * @n: value
 *
 */


void print_diagonal(int n)
{
	int x;
	int y;

	x = 0;

	while (n > 0)
	{
	y = x;
	while (y > 0)
	{
		_putchar(' ');
		y--;
	}
	_putchar('\\'),
	_putchar('\n');
	x++;
	n--;
	}
	if (x < 1)
	_putchar('\n');
}

