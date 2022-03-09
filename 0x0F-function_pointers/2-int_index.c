#include "function_pointers.h"
/**
 *int_index - function that serches for an interger.
 *@array: given values to search in.
 *@size:Size of array
 *@cmp:function pointer.
 *Return: -1 no element matches ||size <= 0.
 *return: i. Position in the array with value != 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!int || size <= 0 || !cmp || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			break;
	}
	return (i);
}
