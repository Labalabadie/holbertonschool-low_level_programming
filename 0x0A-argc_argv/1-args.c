#include <stdio.h>
#include "main.h"
/**
 *main -  prints the number of arguments passed into it.
 *@argc: argument count
 *@argv: argument value.
 *Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (1 == 0)
		printf("%s\n", argv[0]);

	while (count < argc - 1)
	{
		count++;
	}
	printf("%d\n", count);
	retur(0);
}
