#include "variadic_functions.h"
/**
 *sum_them_all - Add any number of argument by variadic functions.
 *@n: number of variables.
 *Return: sum, otherwise 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	int sum;

	if (!...)
		return (0);
	if (n == 0)
		return (0);
	sum = 0;
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	va_end(lst);
	return (sum);
}
