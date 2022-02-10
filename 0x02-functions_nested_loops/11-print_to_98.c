#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  given and int, prints the number in secuence till 98.
 *@n: any given number.
 *Return: void
 **/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
			printf("%d\n", n);
}
