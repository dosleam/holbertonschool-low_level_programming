#include "main.h"

/**
 * puts2 - print every other character of a string
 * start with the firts character
 * @str: string check
 */

void puts2(char *str)
{
	int c;
	int a;

	for (c = 0; str[c] != '0'; c++)
	{
	}
	for (a = 0; a < c; a = 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
