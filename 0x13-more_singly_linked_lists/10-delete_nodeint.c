#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete index node
 * main - check the code
 * @index: node index index
 * @head: first node
 * index start at 0
 *
 * Return: Always 1, if sucessful, else -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
