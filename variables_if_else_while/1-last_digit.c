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
		printf("Last digit of %d is %d and is 0\n", n,n%2);
	}
	else if (n%2 > 0)
	{
		printf("Last digit of %d is %d and isgreater than 5\n", n,n%2);
	}
	else
	{
		printf("%d Last digit of %d and is less than 6 and not 0\n", n,n%2);
	}
	return (0);
}
