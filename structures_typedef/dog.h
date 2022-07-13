#ifndef DOG_T_H
#define DOG_T_H
#include <stdio.h>

/**
 * struct dog - check code
 * @name: value
 * @age: value
 * @owner: value
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_T_H */
