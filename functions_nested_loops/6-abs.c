#include "main.h"
/**
 * _abs - checks
 *
 * @j: character to check
 *
 * Return: 1 or 0 or -1
 */
int _abs(int j)
{

	if (j < 0)
	{
		j = j * -1;
	}

	if (j >= 0)
	{
		j = j;
	}

	return (j);
}
