#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}

	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (haystack);
		}
	}
	return (NULL);
}
