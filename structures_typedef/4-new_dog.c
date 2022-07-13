#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dow - check code
 * @name: value
 * @owner: value
 * @age: value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int i;
	int count = 0;
	char *bkname;
	char *bkowner;

	nw_dog = malloc(sizeof(dog_t));

	if (nw_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		count = count + 1;
	bkname = malloc(count + 1);
	if (bkname != NULL)
	{
		for (i = 0; i <= name[i]; i++)
			bkname[i] = name[i];
	}
	else
	{
		free(nw_dog);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
                count = count + 1;
        bkowner = malloc(count + 1);
        if (bkowner != NULL)
        {
                for (i = 0; i <= owner[i]; i++)
                        bkowner[i] = owner[i];
        }
        else
        {
                free(nw_dog);
                return (NULL);
        }

	nw_dog->name = bkname;
	nw_dog->age = age;
	nw_dog->owner = bkowner;
	return (nw_dog);

}
