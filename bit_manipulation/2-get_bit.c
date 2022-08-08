#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - check code
 * @n: number
 * @index: position
 * Return: mask
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	n = n >> index;
	mask = n & 1;
	return (mask);
}
