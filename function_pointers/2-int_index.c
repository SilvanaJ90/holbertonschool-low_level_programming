#include "function_pointers.h"

/**
 * int_index - check code
 * @array: value
 * @size: value
 * @cmp: pointer
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (array != NULL)
			if (cmp(array[i]) != 0)
				return (i);

	}
	return (-1);

}
