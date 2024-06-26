#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: string source
 * @src: string concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;
	int i;
	
	while (*d != '\0')
	{
		d++;
	}
	for (i = 0; i < n && *s != '\0'; i++)
	{
		*d = *s;
		d++;
		s++;
	}

	*d = '\0';
	return (dest);
}
