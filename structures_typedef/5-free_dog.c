#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - check code
 * @d: value
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
