#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: Pointer to pointer to list
 *@n: value of new node
 *Return: adress to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new;
	dlistint_t *h;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (*head)
	{
		h = *head;
		for (; h->next != NULL; h = h->next)
		{
		}
		new->prev = h;
		h->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;

	}
	new->n = n;
	new->next = NULL;
	return (new);
}
