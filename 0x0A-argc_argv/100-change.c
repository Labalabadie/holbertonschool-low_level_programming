#include <stdio.h>
#include <stdlib.h>
/**
 *main - A program that adds positive numbers.
 *@argc: Argument count. used for a counter in for loop.
 *@argv: Argument value. Interger to be added.
 *Return: 0 success - 1 Error.
 */
int main(int argc, char *argv[])
{
	int i, sum, j, k, l, m;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = 0;
	i = atoi(argv[1]);
	j = i;
	while (i >= 25)
	{
		j %= 25;
		i /= 25;
		sum += i;
	}
	k = j;
	while (j > 0 && j >= 10)
	{
		k %= 10;
		j /= 10;
		sum += j;
	}
	l = k;
	while (k > 0 && k >= 5)
	{
		l %= 5;
		k /= 5;
		sum += k;
	}
	m = l;
	while (l > 0 && l >= 2)
	{
		m %= 2;
		l /= 2;
		sum += l;
	}
	if (m > 0)
	{
		sum += m;
	}
	printf("%d\n", sum);
	return (0);

}
