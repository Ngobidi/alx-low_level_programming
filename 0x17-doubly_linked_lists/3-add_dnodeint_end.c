#include "lists.h"

/**
 * add_dnodeint_end - built a new_node at the end of dlistint_t list
 *
 * @head: node_head
 * @n: num of the elements
 * Return: address of new_element on sucess, else Null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_element;
	}
	else
	{
		*head = new_element;
	}

	new_element->prev = h;

	return (new_element);
}
