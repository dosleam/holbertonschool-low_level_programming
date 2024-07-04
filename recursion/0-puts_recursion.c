#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string, by a new line
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion("s + 1");
}
