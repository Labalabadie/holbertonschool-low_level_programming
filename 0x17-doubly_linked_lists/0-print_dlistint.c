#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list.
 *@h: pointer to first node.
 *Return: lenght
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	for (; h->next != NULL; h = h->next)
	{
		a++;
		printf("%d\n", h->n);
	}
	printf("%d\n", h->n);
	return (a + 1);
}
