#include "variadic_functions.h"

/**
 * print_strings - function which prints strings
 * @separator: string between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	const char *c;

	va_start(list, n);
	while (i < n)
	{
		c = va_arg(list, const char*);
			if (c == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", c);
			}
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
			i++;
	}
	va_end(list);
	printf("\n");
}
