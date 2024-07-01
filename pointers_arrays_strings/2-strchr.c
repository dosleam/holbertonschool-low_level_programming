#include "main.h"
#include <stdio.h>

/**
 * _strchr - ocates a character in a string
 * @s: string
 * @c: character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
