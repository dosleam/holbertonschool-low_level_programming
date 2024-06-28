#include "main.h"
#include <stdio.h>

/**
 * *leet - function that encodes a string into 1337
 * @s: string checked
 * Return: s
 */

char *leet(char *s)
{
	int a;
	int b;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (a = 0; s[a]; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (let[b] == s[a])
				s[a] = num[b];
		}
	}
	return (s);
}
