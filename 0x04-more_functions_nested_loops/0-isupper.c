#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: Parameter functions use
 * Return: (1) for uppercases, zero otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
