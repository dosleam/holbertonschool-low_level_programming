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

	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}

	for (l2 = 0; s2[l2] != '\0' && n > l2; l2++)
	{
	}

	result = malloc((sizeof(char) * (l1 + l2)) + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
