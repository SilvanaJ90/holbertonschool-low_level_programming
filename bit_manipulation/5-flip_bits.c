#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - check code
 * @n: number
 * @m: value
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int identifier = 0;
	unsigned long int different = n ^ m;

	while (different)
	{
		identifier = different & 1;
		if (identifier == 1)
			count++;
		different = different >> 1;
	}
	return (count);
}
