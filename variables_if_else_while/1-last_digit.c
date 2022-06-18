#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /*rand */
	/* your code goes there */
	if (n%2 == 0)
	{
		printf("%d Last digit of and is 0\n", n);
	}
	else if (n%2 > 0)
	{
		printf("%d Last digit of and is greater than 5\n", n);
	}
	else
	{
		printf("%d Last digit of and is less than 6 and not 0\n", n);
	}
	return (0);
}
