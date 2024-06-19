#include "main.h"

/**
 * main - check the code
 * print_alphabet_x10 - print : alphabet x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
		char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet * 10);
		alphabet++;
	}

	_putchar('\n');
	}
