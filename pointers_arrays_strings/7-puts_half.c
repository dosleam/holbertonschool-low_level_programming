#include "main.h"

/**
 * puts_half - function that print half of a string
 * @str: string check
 */

void puts_half(char *str)
{
	int c = 0;
	int a;

	while (str[c] != '\0')
	{
		c++;
	}
	
	a = (c + 1) /2;

	while (a < c)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
