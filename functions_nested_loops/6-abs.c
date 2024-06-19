#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer whose absolute value is required
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	if (n > 0)
	{
		return (n);
	}
	else
		return (0);
}
