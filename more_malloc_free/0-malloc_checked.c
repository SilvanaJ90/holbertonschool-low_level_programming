#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - check code
 * @b: value
 * @p: pointer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int i, *p;

	if (b == 0)
		return (NULL);

	p = malloc(sizeof(int) * b);
	if (p == 0)
		return (NULL);

	for (i = 0; i < b; i++)
		(p[i] = b);
			return (p);
}
