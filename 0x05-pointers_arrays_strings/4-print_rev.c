#include "main.h"
/**
 *print_rev - Function that prints a string, in reverse, followed by new line.
 *@s: Given string.
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	while (a > 0)
	{
		a--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
