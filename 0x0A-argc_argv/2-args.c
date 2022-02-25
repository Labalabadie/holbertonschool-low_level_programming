#include <stdio.h>
/**
 *main - program that prints all arguments it receives.
 *@argc:argument counter.
 *@argv:argument values.
 *Return: 0 success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0 ; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
