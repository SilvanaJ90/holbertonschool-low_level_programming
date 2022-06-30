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
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + 1] = '\0';

	return (dest);
}
