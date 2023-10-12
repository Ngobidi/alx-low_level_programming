#include "lists.h"

/**
 * dlistint_len - function that return len of linked_list
 * @h: doubly linked_list
 * Return: length_linked_list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length_linked_list = 0;

	while (h)
		h = h->next, length_linked_list++;

	return (length_linked_list);
}
