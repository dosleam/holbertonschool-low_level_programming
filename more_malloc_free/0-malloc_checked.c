#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: numbers of bytes to allocate
 * Return: a pointer to the allocated memory. never return NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
