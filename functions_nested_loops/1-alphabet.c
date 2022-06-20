#include "main.h"

/**
 * main - check code
 * print_alphabet  - entry point
 * Description: Prints the alphabet
 * Return: always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		_putchar('\n');
}
