#include "main.h"
/**
 *print_binary - Prints the binary representation of a decimal.
 *@n: Decimal number.
 */
void print_binary(unsigned long int n)
{
	int a = (4 * (sizeof(n)));
	int b = 0;

	if (!n)
		return;
	if (n == 0)
		putchar('0');
	a--;
	for (; a >= 0; a--)
	{
		if (1 << a & n)
		{
		putchar('1');
		b = 1;
		}
		else if (b == 1)
			putchar('0');
	}
}
