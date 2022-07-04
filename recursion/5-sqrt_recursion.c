#include "main.h"

/**
 * sqrt_aux - check code
 * @x: number
 * @y: number
 * Return: x, y
 */

int sqrt_aux(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (sqrt_aux(x + 1, y));
}

/**
 * _sqrt_recursion - check code
 * @n: number
 * Return: num
 */

int _sqrt_recursion(int n)
{
	return (sqrt_aux(1, n));
}
