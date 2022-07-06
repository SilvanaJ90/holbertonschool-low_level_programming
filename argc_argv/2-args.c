#include <stdio.h>

/**
 * main - check code
 * @argc: value
 * @argv: value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%d%s\n", i, argv[i]);
	printf("\n");
	return (0);
}

