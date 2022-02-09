#include "main.h"
/**
 *print_square - prints  a square followed by a new line.
 *@size: value from main
 *Return: void.
 */
void print_square(int size)
{
	int n;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < size ; a++)
	{
	for (n = 0; n < size ; n++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	}
}
