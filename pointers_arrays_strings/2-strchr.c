#include "main.h"
#include <stddef.h>

/**
 * _strchr - check code
 * @s: point
 * @c: check
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (NULL);
		}
	}
}
