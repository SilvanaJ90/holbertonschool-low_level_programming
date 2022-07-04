#include "main.h"

/**
 * is_prime_number - check code
 *
 * @n: number
 *
 * Return: number prime
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 0 || n == 1)
		return (0);
	if (n == 4)
		return (0);
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
