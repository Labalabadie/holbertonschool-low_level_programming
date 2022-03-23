#include "lists.h"
/**
 *listint_len - Counts number of nodes in a linkedlist.
 *@h: ptr to first node.
 *Return: Amount of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
