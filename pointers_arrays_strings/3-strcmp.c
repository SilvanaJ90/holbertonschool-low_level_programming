#include "main.h"

/**
 * _strcmp - check code compara dos cadenas
 * @s1: cadena 1
 * @s2: cadena 2
 * Return: Always 0 si == s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0' && s1[i] != 0; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}

