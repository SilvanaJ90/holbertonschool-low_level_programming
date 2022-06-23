#include "main.h"

/**
 * print_diagonal - checks
 *
 * @n: value
 *
 */


void print_diagonal(int n)
{
	while (n > 0)
	{
	_putchar(' ');
	n--;
	}
	_putchar('\\');
	_putchar('\n');
}
