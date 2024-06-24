#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: letter checked
 * Return: 0 for lowercase, 1 for uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

