#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number
 * @y: number
 *Return: sum of x and y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (_pow_recursion(x, y - 1) * x);
}
