#include "main.h"

/**
 * times_table - print the 9 times table
 * starting with 0
 *
 */

void times_table(void)
{
	int num1;
	int num2;

		for (num1 = 0; num1 <= 9; num1++)
		{
			for (num2 = 0; num2 <= 9; num2++)
			{
				int a;

					a = num1 * num2;

					if (num2 == 0)
					{
						_putchar(a + '0');
					}
					else if (a <= 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(a + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(a / 10 + '0');
						_putchar(a % 10 + '0');
					}
			}
					_putchar('\n');
		}
}
