#include "main.h"
/**
 *puts_half -  Prints the last half of a string.
 *@str: Given string.
 */
void puts_half(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		a++;
		str++;
	}

	for (str = str - (a / 2); *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
