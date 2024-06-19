#include "main.h"

/**
 * main - Print : alphabet with a lowercase
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


