#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter
 *  @str: string to duplicate
 *  Return: a pointer to the duplicated string, or NULL if str is NULL
 *  or if insufficient memory war available
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i;
	unsigned int l;

	if (str == NULL)
	{
		return (NULL);
	}

	for (l = 0; str[l] != '\0'; l++)
		;

	dup_str = (char *)malloc(sizeof(char) * (l + 1));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < l; i++)
	{
		dup_str[i] = str[i];
	}

	dup_str[l] = '\0';
	return (dup_str);
}
