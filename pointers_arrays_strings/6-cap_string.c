#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all world of a string
 * @str: array check
 * Return: str
 */

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			if (str[a - 1] == 9 ||
					str[a - 1] == 10 || str[a - 1] == 32 ||
					str[a - 1] == 33 || str[a - 1] == 34 ||
					str[a - 1] == 40 || str[a - 1] == 41 ||
					str[a - 1] == 44 || str[a - 1] == 46 ||
					str[a - 1] == 59 || str[a - 1] == 63 ||
					str[a - 1] == 123 || str[a - 1] == 125 ||
					str[a - 1] == 0)
				str[a] = str[a] - 32;
		}
	}
	return (str);
}
