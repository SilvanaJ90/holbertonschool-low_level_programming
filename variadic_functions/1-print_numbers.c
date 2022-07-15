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
	va_list largs;

	va_start(largs, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL || separator != "; ")
		{
			printf("%d%s", va_arg(largs, int), separator);
		}
		else
		{
			printf("%d", va_arg(largs, int));
		}
	}
	va_end(largs);
	printf("\n");
}
