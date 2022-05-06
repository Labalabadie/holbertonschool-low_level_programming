#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index of a dlistint_t l-list.
 *@head: pointer to pointer to list.
 *@index: number of node starting from zero
 *Return: 1 if succsess -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux;

	if (!head || !*head)
		return (-1);

	aux = *head;

	for (i = 0; i < index && aux; i++)
	{
		aux = aux->next;
	}
	if (i != index)
	{
		free(aux);
		return (-1);
	}

	if (aux->next != NULL)
		(aux->next->prev = aux->prev);
	if (aux->prev != NULL)
		(aux->prev->next = aux->next);
	else
		*head = aux->next;

	free(aux);
	return (1);
}
