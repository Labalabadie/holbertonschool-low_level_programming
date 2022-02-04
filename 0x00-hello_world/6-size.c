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
		
	printf("size of a character: %lu bytes\n", sizeof(character));
	printf("size of a interger: %lu bytes\n", sizeof(interger));
	printf("size of a long: %lu bytes\n", sizeof(along));
	printf("size of a long long: %lu bytes\n", sizeof(longlong));
	printf("size of a float: %lu bytes\n", sizeof(afloat));
	return (0);
}
