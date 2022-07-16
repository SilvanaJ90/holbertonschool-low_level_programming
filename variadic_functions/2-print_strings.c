#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - check code
 * @separator: pointer
 * @n: value
 * Return: print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list largs;
	char *str;

	va_start(largs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(largs, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(largs);
	printf("\n");
}
