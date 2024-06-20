#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number check
 * Return: 0
 */

void print_to_98(int n)
{
	while (n != '98')
	{
		if (n < 98)
		{
			_putchar("%d, ", n);
			n--;
		}
		else
		{
			_putchar("%d, ", n);
			n++;
		}
	}
	_putchar(98)
	_putchar("\n");
}	
