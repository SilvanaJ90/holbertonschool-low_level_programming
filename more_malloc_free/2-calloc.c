#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - check code
 * str: pointer
 * @nmemb: string
 * @size: size
 * Return: str
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	if (size == 0 || nmemb == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		(str[i] = 0);
			return (str);
}
