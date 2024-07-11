#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - create a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * description: information of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
