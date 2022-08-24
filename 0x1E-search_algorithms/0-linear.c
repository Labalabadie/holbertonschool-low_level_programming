#include "search_algos.h"

/**
 * linear_search - Searchs for a value in an array using, linear search.
 * @array: pointer to array.
 * @size: size of array.
 * @value: value to compare and find.
 * Return: position of array.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
