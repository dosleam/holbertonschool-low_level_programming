#include "main.h"

/**
 * print_alphabet_x10 - Ecris l'alphabet en minuscule x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int r;
	char alphabet;

	for (r = 0; r < 10; r++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}

}
