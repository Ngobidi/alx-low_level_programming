#include "lists.h"

/**
 * free_dlistint - free a all element in dlistint_t list
 *
 * @head: node_head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *all_element = head;

	while (head)
	{
		all_element = head;
		head = all_element->next;
		free(all_element);
	}
}
