#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - check code
 * @b: pointer
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, ini = 1;
	int len = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	if (b[len] == '1')
		result += ini;
	ini *= 2;
	}
	return (result);
}
