#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - check code
  *
  * @d: info of dog
  *
  * Description: delet info dog
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
