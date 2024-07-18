#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - operator sum
 * @a: variable 1
 * @b: variable 2
 * Return: return the result
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - operator substract
 * @a: variable 1
 * @b: variable 2
 * Return: return the result
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - operator product
 * @a: variable 1
 * @b: variable 2
 * Return: return the result
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - operator result
 * @a: variable 1
 * @b: variable 2
 * Return: return the result
 */

int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - operator modulo
 * @a: variable 1
 * @b: variable 2
 * Return: return the result
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
