#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - generates a random number.
 * Specifies if it´s less,more or equal to zero.
 * Return: (0)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
	}
else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
return (0);
}
