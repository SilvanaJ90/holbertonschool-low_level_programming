#include "main.h"
/**
 * _isdigit - checks
 *
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c == 0 && c >= 9)
	{
		return (1);
	}
	else if (c == 1 && c <=9)
	{
		return (0);
	}
	return (0);

}
