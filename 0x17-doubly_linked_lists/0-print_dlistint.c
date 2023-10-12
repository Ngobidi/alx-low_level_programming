#include "lists.h"

/**
 * print_dlistint - display elements in a dlistint_t list
 * @h: doubly linkedlist
 * Return: nodes_num when successful
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodes_num++;
		h = h->next;
	}

	return (nodes_num);
}
