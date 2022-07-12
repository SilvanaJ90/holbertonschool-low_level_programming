#include "dog.h"
#include <stdio.h>

/**
 * init_dog - check code
 * @name: value
 * @age: value
 * @owner: value
 * @d: value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
