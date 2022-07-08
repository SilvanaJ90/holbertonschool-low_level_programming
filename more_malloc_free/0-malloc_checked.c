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
	unsigned int *p;

	if (b == 0)
		return (NULL);

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
