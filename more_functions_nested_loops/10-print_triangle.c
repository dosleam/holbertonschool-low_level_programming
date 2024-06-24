#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int t;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (t = 0; t <= size; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
