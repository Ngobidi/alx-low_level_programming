#include "lists.h"

/**
 * delete_dnodeint_at_index - rm the node at index of the lists
 *
 * @head: node_head
 * @index: index of the list to be deleted starting from 0
 * Return: 1 if code validated, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *rm_node = *head;
	unsigned int x;

	if (!head || !rm_node)
		return (-1);

	if (index == 0)
	{
		rm_node = rm_node->next;
		free(*head);
		*head = rm_node;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (x = 0; rm_node; x++)
	{
		if (x == index)
		{
			if (rm_node->next)
			{
				(rm_node->prev)->next = rm_node->next;
				(rm_node->next)->prev = rm_node->prev;
				free(rm_node);
				return (1);
			}
			else
			{
				(rm_node->prev)->next = NULL;
				free(rm_node);
				return (1);
			}
		}
		rm_node = rm_node->next;
	}

	return (-1);
}
