#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(unsigned long int) * 8 - 1;
	int started = 0;

	while (bit >= 0)
	{

		if ((n & (1UL << bit)) != 0)
		{
			putchar('1');
			started = 1;
		}
		else if (started)
		{
			putchar('0');
		}
		bit--;
	}
	if (!started)
	{
		putchar('0');
	}
}
