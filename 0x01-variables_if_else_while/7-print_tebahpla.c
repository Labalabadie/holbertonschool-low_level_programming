#include <stdio.h>
/**
 * main - Spelles the alphabet in lower cases.
 * then in capital letters.
 * Return: (0)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
		putchar('\n');
	return (0);
}
