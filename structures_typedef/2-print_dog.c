#include "dog.h"

/**
 * print_dog - prints a struct dog
 *@d: variables pointers
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d == NULL)
		printf("Owner: (ni)\n");
	else
		printf("Owner: %s\n", d->owner);
}
