#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * main - check the code (*get_nodeint_at_index -listint_t)
 * @head: linked first node
 * @index: index node
 * starting at 0
 *
 * Return: NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
