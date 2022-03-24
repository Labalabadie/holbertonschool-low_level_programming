#include "main.h"
/**
 *print_binary - Prints the binary representation of a decimal.
 *@n: Decimal number.
 */
void print_binary(unsigned long int n)
{
	int a = (4 * (sizeof(n)));
	int b = 0;

	if (n == 0)
		_putchar('0');
	a--;
	for (; a >= 0; a--)
	{
		if (1 << a & n)
		{
		_putchar('1');
		b = 1;
		}
		else if (b == 1)
			_putchar('0');
	}
}
