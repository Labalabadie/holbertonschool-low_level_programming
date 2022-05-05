#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: pointer to pointer to first node.
 *@n: value to set on new node.
 *Return: &new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head)
	{
	new->next = *head;
	(*head)->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}
