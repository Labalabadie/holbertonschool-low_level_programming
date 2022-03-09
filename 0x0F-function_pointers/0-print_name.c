#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - calls a function by pointer.
 *@name: string
 *@f: function pointer. As argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	f(name);
}
