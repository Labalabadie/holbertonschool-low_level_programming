#include <stdio.h>
/**
 * main - Spelles the alphabet in lower cases.
 * then in capital letters.
 * Return: (0)
 */
int main(void)
{
	char alph;
	char aLPH;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (aLPH = 'A'; aLPH <= 'Z'; aLPH++)
	{
		putchar(aLPH);
	}
		putchar('\n');
	return (0);
}
