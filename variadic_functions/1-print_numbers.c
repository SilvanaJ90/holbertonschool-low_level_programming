#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check code
 * @separator: pointer
 * @n: value
 * Return: print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);
		if (separator != NULL)
		{
			printf("%d%s", value, separator);
		}
	}
	va_end(args);
	printf("\n");
}
