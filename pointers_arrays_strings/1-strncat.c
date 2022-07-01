#include "main.h"
#include <string.h>

/**
 * _strncat - check the code
 * @dest: string one
 * @src: add string to string one
 * Description: add src to dest
 * Return: dest
 * @n: position
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i;

	while (dest[j] != '\0')
	{
		j = j + 1;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
	j = j + 1;
	}

	return (dest);
}
