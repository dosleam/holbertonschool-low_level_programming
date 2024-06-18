#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet is reverse
 *
 * Return: 0
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
		putchar(reverse);

	putchar('\n');
	return  (0);
}
