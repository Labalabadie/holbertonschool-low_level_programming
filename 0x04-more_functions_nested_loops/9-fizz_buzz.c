#include <stdio.h>
/**
 *main - FizzBuzz test.
 * Print numbers from 1 to 100.
 * for every mult of 3 Fizz
 * for every mult of 5 Buzz
 * both FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	return (0);
}
