#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - Prints arguments from a struct.
 *@d: Pointer to element with structure dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if ((*d).name != NULL)
		{
	printf("Name: %s\n", d->name);
		}
	printf("Age: %f\n", d->age);
	if ((*d).owner != NULL)
		{
	printf("Owner: %s\n", d->owner);
		}
	}
}
