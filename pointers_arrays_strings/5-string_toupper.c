#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 * @m: array
 * Description: min to may
 *
 * Return: char
 */

char *string_toupper(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		if (m[i] >= 97 && m[i] <= 122)
		{
			m[i] = m[i] - 32;
		}
		i++;
	}
	return (m);
}
