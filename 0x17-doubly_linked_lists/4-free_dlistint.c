#include "lists.h"
/**
 *free_dlistint - Frees a dlinkedlist.
 *@head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
