#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n"); /*printf statements shows that */
	i = 0;
	while (i < 1)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
