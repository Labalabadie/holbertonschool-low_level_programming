#include "lists.h"
/**
 *print_listint - prints elements of a listint_t list.
 *@h: ptr to first node in liked list.
 *Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%i\n", h->n);
		h = (*h).next;
	}
	return (counter);
}
