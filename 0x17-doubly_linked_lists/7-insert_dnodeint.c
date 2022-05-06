#include "lists.h"
/**
* insert_dnodeint_at_index -inserts a new node in a given position.
* @h: pointer to pointer to list.
* @idx: given position.
* @n: value.
* Return: adress of new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current, *new;

	if (!h || !*h)

		return (add_dnodeint_end(h, n));

	current = *h;

	for (i = 1; i < idx; i++)
	{
		current = current->next;
	}

	if (current->prev == NULL && idx != 1)
		return (add_dnodeint(h, n));

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	if (idx != i)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;
	new->n = n;
	return (new);
}
