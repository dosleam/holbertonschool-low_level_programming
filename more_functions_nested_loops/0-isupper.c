#include "main.h"
#include <stdio.h>

/**
 * isupper - checks for uppercase character.
 * Return: 1 if c is uppercase, 0 otherwise
 * @c: is a character
 */

int _isupper(int c);
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}

