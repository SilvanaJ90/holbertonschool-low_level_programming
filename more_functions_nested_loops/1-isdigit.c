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
	if (c >= 45 && c <= 54)
		return (1);
	else
		return (0);

}
