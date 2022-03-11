#include "variadic_functions.h"
/**
 *print_strings - Write va_arg(n times, *char values), w/ separator in between.
 *@separator: string
 *@n: number of arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ptr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char*);

	if (*ptr == '\0')
		printf("(nil)");
	else
		printf("%s", ptr);

	if (i != n - 1 && separator != NULL)
	printf("%s", separator);
	}
	putchar('\n');
	va_end(str);
}
