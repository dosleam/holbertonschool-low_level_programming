#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print : alphabet
 * main - check the code
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
}


