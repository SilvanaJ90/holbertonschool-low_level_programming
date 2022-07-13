#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - check code
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int i, cont = 0;
	char *bkname, *bkowner;

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		cont = cont + 1;
	bkname = malloc(cont + 1);
	if (bkname != NULL)
	{
		for (i = 0; i <= cont; i++)
			bkname[i] = name[i];
	}
	else
	{
		free(nw_dog);
		return (NULL);
	}
	cont = 0;
	for (i = 0; owner[i] != '\0'; i++)
		cont = cont + 1;
	bkowner = malloc(cont + 1);
	if (bkowner != NULL)
	{
		for (i = 0; i <= cont; i++)
			bkowner[i] = owner[i];
	}
	else
	{
		free(bkname);
		free(nw_dog);
		return (NULL);
	}
	nw_dog->name = bkname;
	nw_dog->age = age;
	nw_dog->owner = bkowner;
	return (nw_dog);
}
