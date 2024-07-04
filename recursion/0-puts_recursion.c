#include "main.h"
#include <stdio.h>

/**
 * puts_recursion - print a string, by a new line
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
	_puts_recursion(s + 1);
}
