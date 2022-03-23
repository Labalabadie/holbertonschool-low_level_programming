#include "lists.h"
/**
 *add_nodeint - Creates a new node at the beggining of a linked list.
 *@head: ptr to derreferences ptr to head.
 *@n: value n in struct.
 *Return: address to new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
