#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - check code
 * @n: value
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
