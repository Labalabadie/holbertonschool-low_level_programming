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

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", va_arg(str, char *));

	if (i == n - 1)
		break;

	if (separator != NULL)

	printf("%s", separator);
	}
	va_end(str);
	putchar('\n');
}
