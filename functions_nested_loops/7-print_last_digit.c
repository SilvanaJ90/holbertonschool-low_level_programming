#include "main.h"
/**
 * print_last_digit - checks
 *
 * @j: character to check
 *
 * Return: 1 or 0 or -1
 */
int print_last_digit(int j)
{

	int x;

	if (j < 0)
	{
		x = j % 10 * -1;
		_putchar(x + '0');
		return (x);
	}

	else

	{
		x = j % 10;
		_putchar(x + '0');
		return (x);
	}

}
