#include "main.h"

/**
 * main - check the code
 * print_alphabet_x10 - Imprime 10 fois l'alphabet en minuscules
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
	}
}
