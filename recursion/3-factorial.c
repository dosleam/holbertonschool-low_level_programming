#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 *@n: number factorial
 *Return: sum factor to n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
