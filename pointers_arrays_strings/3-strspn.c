#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: byte
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}

		count++;
		s++;
	}
	return (count);
}


