#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arguments
 * @argv: arguments
 *
 * Return: 0 if no number is passed , Error if that are not digits or sum adds
 */
int main(int argc, char *argv[])
{
	int a;
	int result = 0;

	if (argc < 1)
		return (0);
	for (a = 1; a < argc; a++)
	{
		if (!atoi(argv[a]))
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[a]);
	}
	printf("%d\n", result);

	return (0);

}
