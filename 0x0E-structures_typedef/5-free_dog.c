#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - Frees memory of a instance.
 *@d: Struct name
 */
void free_dog(dog_t *d)
{
	free(d);
}
