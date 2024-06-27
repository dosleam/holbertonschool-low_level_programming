#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: character string1
 * @s2: character string2
 * Return: differente value
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2); s1++, s2++)
	{
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (0);
	}
}
