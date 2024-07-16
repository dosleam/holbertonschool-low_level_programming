#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to the integer
 * @size: of the array (integer)
 * @cmp: pointer to the function integer
 * Return: - 1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ct = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (ct < size)
	{
		if (cmp(array[ct]))
		{
			return (ct);
		}
		ct++;
	}
	return (-1);
}
