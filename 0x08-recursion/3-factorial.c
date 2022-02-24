#include "main.h"
/**
 *factorial - Calculates a factorial by recursion.
 *@n: given number.
 *Return: Result of the factorial. -1 for numbers below 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
