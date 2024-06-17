#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number, then prints the last digit of
 * the number stored in the variable n, along with additional information
 * about this last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
		
		if (last_digit > 5)
		{
			printf("and is greather than 5\n");
		}
		else if (last_digit == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and is less than 6 and not 0\n");
		}
	return (0);
}
