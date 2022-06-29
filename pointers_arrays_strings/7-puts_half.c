#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: pointer
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	if (j % 2 != 0)
		j = (j + i) / 2;
	else
		j = j / 2;
	while (j < i)
	{
		j++;
		_putchar (str[j - 1]);
	}
	_putchar('\n');
}
