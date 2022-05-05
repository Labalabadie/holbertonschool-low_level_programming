#include "lists.h"
/**
 *dlistint_len - Returns numer of elements in a double linked list
 *@h: pointer to first node.
 *Return: lenght of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
		n++;
	return (n);
}
