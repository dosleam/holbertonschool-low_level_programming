#include "main.h"

/**
 * main - check the code
 * print_alphabet_x10 - Imprime 10 fois l'alphabet en minuscules
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
