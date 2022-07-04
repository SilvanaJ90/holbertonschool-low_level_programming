#include "main.h"

/**
 * factorial - check code
 *
 * @n: value
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n-1));
}
