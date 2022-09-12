#include "search_algos.h"

/**
 * print_array - check code
 * @array: array
 * @low: value low
 * @high: value high
 */

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}


/**
 * binary_search - check code
 * @array: array
 * @size: size array
 * @value: key
 * Return: always value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, central;
	int valueCentral;

	if (size == 0 || array == NULL || value == 0)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		central = (low + high) / 2;
		valueCentral = array[central];
		if (value == valueCentral)
			return (central);
		else if (value < valueCentral)
			high = central - 1;
		else
			low = central + 1;
	}
	return (-1);
}
