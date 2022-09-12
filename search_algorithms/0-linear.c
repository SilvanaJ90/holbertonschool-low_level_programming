#include "search_algos.h"

/**
 * linear_search - check code
 * @array: array
 * @size: size to array
 * @value: key
 * Return: always -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0 || array == NULL || value == 0)
		return (-1);

	for (; i < size; i++)
		if (array[i] == value)
			return (i);
	return (-1);
}
