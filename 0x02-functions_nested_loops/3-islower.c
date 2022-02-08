#include "main.h"
/**
 * c: cheking character.
 * islower - checks for lower case characters.
 * Return: 1 for lower case in c parameter, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
		return (0);
	_putchar('\n');
}
