#include "main.h"
/**
 * IamPrime - Function to find prime numbers
 * @i: first integer
 * @n: second integer
 * Return: 0 or 1
 */

int a(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (n < (i * i))
	{
		return (1);
	}
	return (a(n, i + 1));
}

/**
 * is_prime_number - function to print prime numbers
 * @n: integer
 * Return: IamPrime function values
 */

int is_prime_number(int n)
{
	if (n <= 1)
		{
		return (0);
		}
	else
		return (a(n, 2));
}
