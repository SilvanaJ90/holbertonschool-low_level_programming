#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - check code
 * @n: number
 * @index: position
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	while (index != 0)
	{
		pos *= 2;
		index--;
	}
	*n |= pos;
	return (1);
}
