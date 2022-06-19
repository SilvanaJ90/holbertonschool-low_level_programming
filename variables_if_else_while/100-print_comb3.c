#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

	{
		int n, n2;

		for (n = 0; n < 9; n++)
		{
			
			for (n2 = n + 1; n2 < 10; n2++)
			{
			putchar((n % 10) + '0');
			putchar((n2 % 10) + '0');
		if (n == 9 && n2 == 10)
			continue;
		putchar(',');
	putchar(' ');
		
			}
		}
		putchar('\n');
	
		return (0);
	}
