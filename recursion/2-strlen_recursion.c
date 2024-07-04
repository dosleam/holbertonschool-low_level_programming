#include "main.h"

/**
 * _strlen_recursion - returns the length of a string recursion
 * @s: string check
 * Return: sum charracter string *s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
