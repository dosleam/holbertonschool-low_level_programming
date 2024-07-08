#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size to array
 * @c: specific char
 * Return: NULL if egal 0 else return array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a == 0)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}

	return (a);
}
