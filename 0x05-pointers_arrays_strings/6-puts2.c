#include "main.h"
/**
 *puts2 - prints every other character of a string.
 *@str: given String.
 *
 */
void puts2(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(*str);
		}
		a++;
		str++;
	}
	_putchar('\n');
}
