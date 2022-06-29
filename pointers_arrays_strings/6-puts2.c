#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - check the code
 *
 * @str: string.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] >= '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
