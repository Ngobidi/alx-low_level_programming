#include "lists.h"

/**
 * sum_dlistint - summation value of n dlistint_list
 *
 * @head: node_head
 * Return: sum_n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_n = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum_n += head->n;
		head = head->next;
	}

	return (sum_n);
}

