#include "search_algos.h"

/**
 *binary_search - finds a value in a sorted array by Binary search algorith
 *@array: Pointer to array of integers.
 *@size: Size of array.
 *@value: Value to find
 *Return: Returns index in wich value is stored. -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_aux(array, 0, size - 1, value));
}

/**
 *binary_search_aux - Auxiliar function to use recursion with a dynamic array
 *@array: Pointer to array of integers.
 *@left: Position of lowest posible index.
 *@right: Position of highest posible index.
 *@value: Value to find
 *Return: Returns index in wich value is stored, -1 otherwise
 */
int binary_search_aux(int *array, int left, int right, int value)

{
	int mid = (left + ((right - left) / 2));

	print_binary_search(array, left, right);

	if (left >= right && array[left] != value)
		return (-1);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_aux(array, left, mid - 1, value));
	else if (array[mid] < value)
		return (binary_search_aux(array, mid + 1, right, value));
	return (-1);
}

/**
 *print_binary_search - Prints array.
 *@array: Pointer to array of integers.
 *@left: Position of lowest posible index
 *@right: Position of highest posible index
 */
void print_binary_search(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
		left++;
	}
	putchar('\n');

}
