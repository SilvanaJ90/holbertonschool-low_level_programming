#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
		int n;
		char alphabet;

		for (n = 0; n < 10; n++)
			putchar((n % 16) + '0');

		for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
			putchar(alphabet);
		putchar('\n');



		return (0);
	}
