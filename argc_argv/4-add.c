#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 if no number is passed , Error if there are non-digit arguments
 */
int main(int argc, char *argv[])
{
	int a, i;
	int result = 0;
	char *arg;

	if (argc < 2)
		return (0);
	for (a = 1; a < argc; a++)
	{
		arg = argv[a];

		for (i = 0; arg[i] != '\0'; i++)
		{
			if (!isdigit(arg[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(arg);
	}
	printf("%d\n", result);

	return (0);
}
