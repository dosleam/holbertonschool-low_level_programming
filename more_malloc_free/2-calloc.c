#include "main.h"

/**
 * _calloc - allocates memory for an array and initialize the memory to zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: a pointer memory to allocate (ptr)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (total = 0; total < nmemb * size; total++)
	{
		ptr[total] = '\0';
	}
	
	return (ptr);
}
