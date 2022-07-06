#include "main.h"
#include <stdlib.h>

/**
 * create_array - check code
 * str: pointer
 * @c: string
 * @size: size
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		(str[i] = c);
			return (str);
}
