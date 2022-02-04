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

	printf("Size of a char: %u byte(s)\n", sizeof(character));
	printf("Size of an int: %u byte(s)\n", sizeof(interger));
	printf("Size of a long int: %u byte(s)\n", sizeof(along));
	printf("Size of a long long int: %u bytes(s)\n", sizeof(longlong));
	printf("Size of a float: %u byte(s)\n", sizeof(afloat));

	return (0);
}
