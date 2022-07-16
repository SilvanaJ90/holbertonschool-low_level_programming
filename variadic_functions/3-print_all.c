#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - check code
 * @format: list of types of arguments passed fto the funtions
 *
 */

void print_all(const char * const format, ...)
{
	int i, n = 0;
	va_list largs;
	char *separator = ", ";
	char *str;

	va_start(largs, format);

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(largs, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(largs, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(largs, double), separator);
				break;
			case 's':
				str = va_arg(largs, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, separator);
				break;
		}
		n++;
	}
	va_end(largs);
	printf("\n");
}
