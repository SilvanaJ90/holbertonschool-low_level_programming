#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator -check code
 * @array: value
 * @size: value
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			if (array != NULL)
				action(array[i]);
	}
}
