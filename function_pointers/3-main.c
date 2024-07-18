#include "3-calc.h"

/**
 * main - function main
 * @argc: number of parameter
 * @argv: array of parameter
 * Return: result
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
