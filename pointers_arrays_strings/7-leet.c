
#include "main.h"
#include <stdio.h>

/**
 * leet - check the code
 *
 * @c: array
 * Description: change for #s
 *
 * Return: char
 */

char *leet(char *c)
{
	int i;
	int j;
	char v[] = {97, 101, 108, 111, 116};
	char n[] = {52, 51, 49, 48, 55};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == v[j] || c[i] == v[j] - 32)
			{
				c[i] = n[j];
			}
		}
	}
	return (c);
}
