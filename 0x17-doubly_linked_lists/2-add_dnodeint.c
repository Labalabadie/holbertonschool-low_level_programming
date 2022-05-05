#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return NULL;
	
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return(new);
}