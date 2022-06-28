#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 *
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	int c = -1;
	int i;
	char st[892];

	for (i = 0; s[i] != '\0'; i++)
	{
		st[i] = s[i];
		c = c + 1;
	}
	i = 0;

	while (c >= 0)
	{
		s[i] = st[c];
		i++;
		c--;
	}
}
