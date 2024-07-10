#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: a pointer to the newly created array or NULL if min > max
 * or if malloc fails
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
