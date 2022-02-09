#include "main.h"
/**
 * print_line - Draws a line in the terminal
 * @n : countdown for while.
 *Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
