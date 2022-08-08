#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - check code
 * @n: pointer number
 * @index: position node
 * Retrurn: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return(-1);
	a = ~(1 << index);
	*n = *n & a;
	return (1);
}
