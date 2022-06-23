#include <stdio.h>
#include <math.h>

/**
 * main -check
 *
 * Return: 0
 */

int main(void)
{
	int n;

	long num = 612852475143;

	for (n = (int) sqrt(num); n > 2; n++)
	{
		if (num % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}

	return (0);
}
