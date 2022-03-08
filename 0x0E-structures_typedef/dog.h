#ifndef MASCOT
#define MASCOT
/**
 *struct dog - New Struct, dog, three types of data.
 *@name: name (string)
 *@age: age in float.
 *@owner: owner (string)
 *
 *Description: Example for learning.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
