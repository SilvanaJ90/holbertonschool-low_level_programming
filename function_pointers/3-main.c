#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc
 * @argc: long of argv
 * @argv: array with a, op and b
 * Return: operation result
 */
int main(int argc, char **argv)
{

	int (*operation)(int, int) = NULL;
	int result = 0, a = 0, b = 0;
	char *op = NULL;

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	operation = get_op_func(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (operation == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
