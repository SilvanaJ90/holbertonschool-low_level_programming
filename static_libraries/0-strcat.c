#include "main.h"

/**
 * _strcat - check the code
 * @dest: string one
 * @src: add string to string one
 * Description: add src to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *saved = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++) != '\0')
	{
		continue;
	}
	return (saved);
}
