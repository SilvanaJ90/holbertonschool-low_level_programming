#include <stdio.h>

/**
 * main - check code
 * @argc: value
 * @argv: value
 * @mul = value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int mul;

	if (argc == 3)
		{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
		return (0);
		}
		else
		{
		printf("Error\n");
		return (1);
		}
}
