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
	size_t cpt;

	if (action != NULL && array != NULL)
	{
		for (cpt = 0; cpt < size; cpt++)
			action(array[cpt]);
	}
}
