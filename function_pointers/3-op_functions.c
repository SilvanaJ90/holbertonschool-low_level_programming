#include "3-calc.h"

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a -b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	THROW_ERROR(b == 0, ERROR_MESSAGE, EXIT_BY_ZERO);
	return (a / b);
}

int op_mod(int a, int b)
{
	THROW_ERROR(b == 0, ERROR_MESSAGE, EXIT_BY_ZERO);
	return (a % b);
}
