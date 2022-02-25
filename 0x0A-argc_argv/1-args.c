#include <stdio.h>
#include "main.h"
/**
 *main -  prints the number of arguments passed into it.
 *@argc: argument count
 *@argv: argument value unused.
 *Return: 0 success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
