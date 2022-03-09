#include "function_pointers.h"
/**
 *array_iterator - executes a func as a parameter on each element of an array.
 *@array:String.
 *@size: Size of array.
 *@action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || !size || action == NULL)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
