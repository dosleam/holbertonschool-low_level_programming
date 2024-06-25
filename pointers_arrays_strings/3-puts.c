#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: string print
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
