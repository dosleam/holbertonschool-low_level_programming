#include <stdio.h>

/**
 * main - Write a program that prints all single digit
 *
 * Return: 0
 */
int main(void)
{
	int numero;

	for (numero = 48; numero <= 57; numero++)
		putchar(numero);

	putchar('\n');
	return (0);
}
