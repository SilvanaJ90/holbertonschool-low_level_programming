#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - check code
 * @format: pointer
 * @n: value
 * Return: print
 */

void print_all(const char * const format, ...)
{
	int i, n = 0;
	va_list largs;
	char * separator;
	char *string;

	va_start(largs, format);

	for (i = 0; format && format[i] < n; i++)
	{
		printf("%c%s", va_arg(largs, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(largs);
	printf("\n");
}
