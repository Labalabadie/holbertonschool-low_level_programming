#include "dog.h"
#include "stdlib.h"
/**
 *init_dog - Initializes  a variable type "struct dog"
 *@d: Name of the variable.
 *@name: Name of dog.
 *@age: age in float.
 *@owner: Owner in string.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
