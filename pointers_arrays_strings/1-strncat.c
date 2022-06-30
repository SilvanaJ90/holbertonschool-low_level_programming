#include "main.h"

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
	char *saved = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++) != '\0' && n > 8)
	{
		continue;
	}
	return (saved);
}
