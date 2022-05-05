#include "lists.h"
/**
 *
 *
 *
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
