
#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: string midle
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	if (j % 2 != 0)
		j = (j + 1) / 2;
	else
		j = j / 2;
	while (j < i)
	{
		j++;
		_putchar(str[j - 1]);
	}
	_putchar('\n');


}
