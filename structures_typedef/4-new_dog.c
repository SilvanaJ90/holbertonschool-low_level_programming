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
	dog_t *dog;
	int i, cont = 0;
	char *cpname, cpowner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		cont = cont + 1;
	cpname = malloc(cont + 1);
	if (cpname != NULL)
	{
		for (i = 0; i <= cont; i++)
			cpname[i] = name[i];
	}
	else
	{
		free(dog);
		return (NULL);
	}
	cont = 0;
	for (i = 0; owner[i] != '\0'; i++)
		cont = cont + 1;
	cpowner = malloc(cont + 1);
	if (cpowner != NULL)
	{
		for (i = 0; i <= cont; i++)
			cpowner[i] = owner[i];
	}
	else
	{
		free(cpname);
		free(dog);
		return (NULL);
	}
	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);
}
