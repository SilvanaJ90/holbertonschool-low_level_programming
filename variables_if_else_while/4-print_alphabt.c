#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'd'; alphabet++)

			putchar(alphabet);

		for (alphabet = 'f'; alphabet <= 'p'; alphabet++)

			putchar(alphabet);

		for (alphabet = 'r'; alphabet <= 'z'; alphabet++)

			putchar(alphabet);

		putchar('\n');

		return (0);
	}
