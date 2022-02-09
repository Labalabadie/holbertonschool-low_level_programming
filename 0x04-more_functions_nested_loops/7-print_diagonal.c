#include "main.h"
/**
 *print_diagonal - Draw a diagonal in shell.
 *@n: Number of lines
 *Return: void.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = a; b > 0; b--)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
