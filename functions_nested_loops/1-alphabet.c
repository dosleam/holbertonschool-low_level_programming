#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - check the code
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
	return (0);
}


