#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: (0) Success
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
