#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenates
 * Return: a pointer to the newly allocated space in memory
 * containing the concatenates return NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
	{
		n = l2;
	}

	result = malloc(l1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		result[l1 + j] = s2[j];
	}

	result[l1 + n] = '\0';

	return (result);
}
