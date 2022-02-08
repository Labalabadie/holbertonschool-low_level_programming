#include "main.h"
/**
  print_alphabet_x10 - Print the alphabet x10 followed by a new line.
 * Return: (0) success.
 */
void print_alphabet_x10(void)
{
	char ch;
	int cn;

	for (cn = 0; cn <= 9; cn++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
