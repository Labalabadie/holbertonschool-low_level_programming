#include "lists.h"
/**
 *sum_dlistint -  sum of all the data (n) of a dlistint_t linked list.
 *@head: pointer to first node.
 *Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	if (!head)
		return (0);

	while (head)
	{
		a = head->n + a;
		head = head->next;
	}
	return (a);
}
