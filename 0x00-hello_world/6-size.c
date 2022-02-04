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
	long along;
	long long longlong;
	float afloat;

	printf("size of a character: %lu byte(s)\n", sizeof(character));
	printf("size of a interger: %lu byte(s)\n", sizeof(interger));
	printf("size of a long int: %lu byte(s)\n", sizeof(along));
	printf("size of a long long int: %lu bytes(s)n", sizeof(longlong));
	printf("size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
