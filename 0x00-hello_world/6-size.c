#include<stdio.h>
/**
 * main - prints the size of various types
 * Return messages
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int interger;
	char character;
	long int along;
	long long int longlong;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(interger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(along));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(longlong));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
