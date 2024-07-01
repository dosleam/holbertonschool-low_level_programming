#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - 
 * @s: 
 * @accept: 
 * Return: 
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
