#ifndef VARIADIC
#define VARIADIC
#include <stdio.h>
#include <stdarg.h>
/**
 *struct chfon - name of structure
 *@x: identifier for va_arg, to access struct by matching with format
 *@f: printf function
 */
typedef struct chfon
{
	char x;
	void (*f)(va_list);
} chfun;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
