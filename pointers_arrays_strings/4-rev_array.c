#include "main.h"

/**
 * reverse_array - check code
 * @a: array
 * @n: numbers de elementos
 */

void reverse_array(int *a, int n)
{

	int i;
	int j;
	int k;

	i = 0;

	n = n - 1;
	while (i < n)
	{
	j = a[n];
	k = a[i];
	a[i] = j;
	a[n] = k;
	i++;
	n--;
	}
}
