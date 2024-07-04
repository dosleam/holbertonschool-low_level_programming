#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string, by a new line
 * @s: string a print
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
