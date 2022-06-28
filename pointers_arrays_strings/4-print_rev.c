#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * @s: pointer
 */

void print_rev(char *s)
{
	int i;
	int c = -1;

	for (i = 0; s[i] != 0; i++)
	{
		c = c + 1;
	}
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}

}
