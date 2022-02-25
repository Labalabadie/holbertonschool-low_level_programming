#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - A program that adds positive numbers.
 *@argc: Argument count. used for a counter in for loop.
 *@argv: Argument value. Interger to be added.
 *Return: 0 success - 1 Error.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (*argv[i] > '9' || *argv[i] < '0' || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
