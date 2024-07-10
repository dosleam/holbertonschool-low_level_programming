#include "main.h"

/**
 * _calloc - allocates memory for an array and initialize the memory to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: a pointer to the allocated memory initialized to zero
 * or NULL if the allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total);

	return (ptr);
}
