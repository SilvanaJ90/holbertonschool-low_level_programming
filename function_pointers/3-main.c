#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc
 * @argc: long of argv
 * @argv: array with a, op and b
 * Return: operation result
 */
int main(int argc, char *argv[])
{
	int a = argv[1];
	int b = atoi(argv[3]);
	char *op = argv[2];
	int (*operation)(int, int);
	int r;


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
	operation = get_op_func(op);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	r = operation(a, b);
	printf("%d\n", r);
	return (0);
}
