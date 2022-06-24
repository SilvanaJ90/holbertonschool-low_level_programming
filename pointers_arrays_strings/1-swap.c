#include "main.h"

/**
 * swap_int - Check
 *
 * @a: value poin a
 * @b: value poin b
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
