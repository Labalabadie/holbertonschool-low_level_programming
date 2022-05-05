#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));


	if (*head)
	{
		h = *head;
		for (;h->next != NULL; h = h->next);
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
	return(new);
}
