#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: a list of types of arguments passed to the function
 * @...: the variable arguments to be printed
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;
	const char *separator = "";

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);

			if (format[i] == 'c')
				printf("%c", va_arg(list, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(list, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(list, double));
			else if (format[i] == 's')
			{
				str = va_arg(list, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}

			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(list);
}
