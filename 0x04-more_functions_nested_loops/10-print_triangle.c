#include "main.h"
/**
 * print_triangle - Prints a triangle followed by new line.
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{i
		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size ; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
