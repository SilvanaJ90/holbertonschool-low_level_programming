#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/*
*	while (i < 1)
*	{
*		putchar(i);
*	}
*/
	printf("Infinite loop avoided! \\o/\n");/* when the for loop is finished */

	return (0);
}
