#include "lists.h"
/**
 *print_list - Functions that prints all elements of a list_t list.
 *@h: Name of the list.
 *Return: amount of nodes in linked list.
 */
size_t print_list(cons list_t *h)
{
	int a = 0;

	while (h != NULL)
	{
	if ((*h).str == NULL)
		printf("[0] (nil)");
	else
		printf("[%d] %s\n", (*h).len, h->str);
	h = h->next;
	a++;
	}
	return (a);
}
