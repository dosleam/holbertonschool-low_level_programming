#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: numbers of bytes to allocate
 * Return: a pointers
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
