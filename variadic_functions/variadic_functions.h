#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct form - struct for choose type print
 * @check: check the correspondance
 * @f: choose the functions
 */

typedef struct form
{
	char *check;
	void (*f)(va_list org);
} formule;

void print_int(va_list org);
void print_float(va_list org);
void print_char(va_list org);
void print_string(va_list org);

#endif
