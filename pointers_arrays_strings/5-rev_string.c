#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: print string
 * Return: 0
 */

void rev_string(char *s)
{
	int l;
	int i;
	char temp;
	int c = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	c = l - 1;
	for (i = 0; i <= c; i++; c--)
	{
		temp = s[i];
		s[i] = s[c]
		s[c] = temp;
	}
}
			
