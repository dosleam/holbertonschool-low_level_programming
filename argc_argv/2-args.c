#include <stdio.h>

/**
 * main - program that print all arguments it receives
 * @argc: argument
 * @argv: argument
 * Return: string of a to argv
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
