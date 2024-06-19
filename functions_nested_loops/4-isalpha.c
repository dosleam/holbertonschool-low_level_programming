#include "main.h"

/**
 * _isalpha - check if a character is lowercase or uppercase
 * @c: the character to be checked
 * Return: 1 if c is lowercase, 2 if c is uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
