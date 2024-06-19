#include "main.h"

/**
 * islower - checks for lowercase character
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}	
