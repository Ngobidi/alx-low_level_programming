#include "lists.h"

/**
 * add_dnodeint - add a new_node at the start of dlistint_t_list
 *
 * @head: node_head
 * @n: num of the elements
 * Return: address of the new_element on success, else Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;
	dlistint_t *h;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_element->next = h;

	if (h != NULL)
		h->prev = new_element;

	*head = new_element;

	return (new_element);
}
