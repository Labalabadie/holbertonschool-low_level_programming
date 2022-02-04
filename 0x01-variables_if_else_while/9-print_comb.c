#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: (0) Success
 */
int main(void)
{
	int b;
	int c = 44;
	int d = 57;

	for (b = 48; b < 57; b++)
	{
	putchar(b);
	putchar(c);
	}
	putchar(d);
	putchar('\n');
	return (0);
}
