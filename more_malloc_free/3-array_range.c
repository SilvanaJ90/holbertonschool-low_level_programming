#include "main.h"
#include <stdlib.h>

/**
 * array_range - check code
 * @min: value
 * @max: value
 * Return: new pointer
 */

int *array_range(int min, int max)
{
	int *str;
	int a;

	if (min > max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (min <= max)
	{
		str[a] = min;
		min++;
		a++;
	}
	return (str);
}
