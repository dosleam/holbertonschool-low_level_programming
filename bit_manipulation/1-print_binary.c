#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: variable
 */

void print_binary(unsigned long int n)
{
	unsigned long int result = 0;
	unsigned long int count;
	unsigned long int i = n;

	if (i == 0)
		_putchar('0');
	if (i == 1)
		_putchar('1');

	while (i > 1)
	{
		count = 1;

		while (count * 2 < i)
		{
			count = count * 2;
		}

		result = result + count;

		if (result <= n && result * 2 != n)
			_putchar('1');

		else if (result * 2 == n)
		{
			_putchar('1');
			result = result * 2;
			count = count * 2;
		}

		else
		{
			result = result - count;
			_putchar('0');
		}

		i = count;
	}
}
