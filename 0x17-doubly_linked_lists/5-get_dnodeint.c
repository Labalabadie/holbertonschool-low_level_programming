#include "lists.h"
/**
 *get_dnodeint_at_index - gets the nth node of a dlistint_t
 *@head: pointer to first node.
 *@index: unsigned int number to retrieve
 *Return: pointer to indexth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head)
		return (NULL);

	current = head;

	for (i = 0; i < index; i++)
	{
		if (current->next->next)
			current = current->next;
		else
			return (NULL);
	}
	return (current);

}
