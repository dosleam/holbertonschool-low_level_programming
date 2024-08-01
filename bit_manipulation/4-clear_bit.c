#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: variable
 * @index: index
 * Return: value of a bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
        return -1;
	}
	
	*n &= ~(1UL << index);
	return 1;
}
