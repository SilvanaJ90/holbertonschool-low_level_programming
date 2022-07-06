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
	unsigned int suma; /*acumulador y numero leido*/
	int i;
	
	if (argc < 3)
		printf("Error\n");
		return (1);
	for (i = 0; i < argv; i++)
	{
		suma = (argv[1]) + (argv[2]);
		printf("%d\n", suma);
		return (0);
	}
}
