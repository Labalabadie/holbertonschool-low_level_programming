#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (!head)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;
	return(new);
}
