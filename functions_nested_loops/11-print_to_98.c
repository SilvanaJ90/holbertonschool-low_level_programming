#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -check
 *
 * @n: run int
 *
 * Return: 1 or 0 or -1
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	printf("\n");
}
