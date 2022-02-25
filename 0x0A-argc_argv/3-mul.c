#include <stdio.h>
#include <stdlib.h>
/**
 *main - A program that multiplies two numbers using arguments.
 *@argc: arg counter used to return error if other than 2 arguments are given.
 *@argv: argument Value.
 *Return: 0 success, 1 Error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[2]) * atoi(argv[1]));
	}
	return (0);
}
