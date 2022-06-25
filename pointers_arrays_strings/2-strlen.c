#include "main.h"
#include <string.h>

/**
 * _strlen - description strlen calcula the length of a string
 *
 * @s: funtion calcula length of the string pointed to by s
 *
 * Return: the strlen function return of bytes in the string pointed to by s
 */

int _strlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
		return (count);
}
