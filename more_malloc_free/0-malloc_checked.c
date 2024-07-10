#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: numbers of bytes to allocate
 * Return: a pointers
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
