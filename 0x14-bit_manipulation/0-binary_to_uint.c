#include "main.h"

/**
 *_pow - Does exponential arithmetic.
 *@a: Base number.
 *@b: exponential number.
 *Return: Result.
 */
int _pow(int a, int b)
{
	int result = 1;

	if (b < 1)
		return (1);
	for (; b > 0; b--)
	{
		result = result * a;
	}
	return (result);
}
/**
 * binary_to_uint - converts binary in to uns int.
 *@b: Given string.
 *Return: number in decimal, or 0 if unvalid string.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	int j = 0;
	unsigned int i = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		return (0);
	}
	a--;
	while (a >= 0)
	{
		if (b[a] == '1')
		{
			i += _pow(2, j);
		}
		a--;
		j++;
	}
	return (i);
}
