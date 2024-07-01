#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: memory areas
 * @src: memory areas
 * @n: byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
