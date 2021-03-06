#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - check code
* @n: value
* Return: result
*/

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
