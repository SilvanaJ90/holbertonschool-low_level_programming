#include "main.h"

/**
 * _sqrt_recursion - check code
 * @n: number
 * Return: raiz n
 */

int _pow2( int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (x * _pow2(x + 1, y));
}

int _sqrt_recursion(int n)
{
	return (_pow2(1, n));
}
