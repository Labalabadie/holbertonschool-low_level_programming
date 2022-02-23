#include "main.h"
/**
 *_puts_recursion - Prints a string, followed by a new line.
 *@s: given string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

