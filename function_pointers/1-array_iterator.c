#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array integer
 * @size: size to array
 * @action: function pointers
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (size <= 0)
		return;
	if (array == 0)
		return;
	if (action == 0)
		return;

	while (i < size)
	{
		action(*array);
		i++;
		array++;
	}
}
