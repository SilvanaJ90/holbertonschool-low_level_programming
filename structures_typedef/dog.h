#ifndef DOG_T_H
#define DOG_T_H
#include <stdio.h>

/**
 * struct dog - check code
 * @name: value
 * @age: value
 * @owner: value
 */

dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog_t *d, char *name, float age, char *owner);

void print_dog(struct dog_t *d);

#endif /* DOG_T_H */
