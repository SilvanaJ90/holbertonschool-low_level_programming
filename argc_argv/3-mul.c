#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: value
 * @argv: value
 * @mul = value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int mult;

	if (argc == 3)
	{
		mult = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
