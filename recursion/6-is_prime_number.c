#include "main.h"

/**
 * rec_number - check code
 *
 * @i: number
 * @j
 *
 * Return: number prime
 */

int rec_numbers(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
        	return (rec_numbers(i, j +1));
}

/**
 * is_prime_number - check code
 *
 * @n: number
 *
 * Return: number prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return(0);
	}
	return (rec_numbers(n, 2));
}
