#include "variadic_functions.h"
/**
 *print_numbers - Prints arguments in int with separator in between.
 *@separator: separator un string.
 *@n: constant in interger
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (i == n - 1)
			break;

		if (separator != NULL)
		printf("%s", separator);
	}
	va_end(lst);
	putchar('\n');
}
