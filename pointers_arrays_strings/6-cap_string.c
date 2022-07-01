#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string: 1 letter en m
 * @
 *
 *
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int x = 0;
	char *c = " \t\n;,.!?\"(){}\0";
	
	if (str[x] >= 97 && str[x] <= 122)
	{
		str[x] = str[x] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				if(str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] -32;
				}
			}
		}
	}
	return (str);
}
