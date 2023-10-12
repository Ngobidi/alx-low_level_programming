#include "lists.h"

/**
 * get_dnodeint_at_index - find nth_node of the dlistint_t list
 *
 * @head: node_head
 * @index: nth_node starting from zero
 * Return: the nth_node on sucessful, else Null if no node exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	x = 0;

	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}

	return (head);
}
