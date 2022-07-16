#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_numbers - check code
 * @separator: pointer
 * @n: value
 * Return: print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list largs;
	int j;

	va_start(largs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(largs, int));
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (separator != NULL)
			{
				printf("%s%d", separator, va_arg(largs, int));
			}
			else
			{
				if (i < n)
					printf("%c", separator[j]);
			}
		}
	}
	va_end(largs);
	printf("\n");
}
