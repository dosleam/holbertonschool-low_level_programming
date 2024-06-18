#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';
	char letters = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (letters <= 'Z')
	{
		putchar(letters);

		letters++;
	}
	putchar('\n');
	return (0);
}
