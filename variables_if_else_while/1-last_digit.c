#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last_digit = n % 10; // Calcul du dernier chiffre de n

	printf("Last digit of %d is %d ", n, last_digit);
		
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
