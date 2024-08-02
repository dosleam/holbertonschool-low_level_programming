#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);

		result = result * 2 + (b[count] - '0');
	}
	return (result);
}
