#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - check code
 * @name: value
 * @age: value
 * @owner: value
 */

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog_t *d, char *name, float age, char *owner);

void print_dog(struct dog_t *d);

#endif /* DOG_H */
