#include "main.h"

/**
 * main - check the code
 * print_alphabet_x10 - print : alphabet x10
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
void print_alphabet_x10(void)
{
	int count = 0;
	while (count < '10')
	{
		print_alphabet();
		count++;
	}
}
