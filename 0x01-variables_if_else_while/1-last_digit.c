#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates a random number.
 * Compares the last digit and displays in St.Op. whether its greater than 5,
 * lower than 6,
 * or equal to zero.
 * Return: (0) for success.
 */
int main(void)
{
		int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int LastDigit;
LastDigit = n % 10;
if (LastDigit > 5)
	{
	printf("Las digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (LastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	}
else if (LastDigit < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
	}
return (0);
}
