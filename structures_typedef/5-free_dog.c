#include "dog.h"
#include <stdio>

/**
 * free_dog - check code
 * @d: value
 */

void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
