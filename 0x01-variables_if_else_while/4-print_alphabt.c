#include <stdio.h>

/**
 * main - prints alphabet in lowercase,except q and e,
 * followed by a new line.
 * Return: (0) Success
 */
int main(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z' ; alph++)
	{
	if (alph != 'e' && alph != 'q')
	{
	putchar(alph);
	}
	}
	putchar('\n');
	return (0);
}
