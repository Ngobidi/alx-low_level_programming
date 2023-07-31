#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - free list
 * @head: listint_t list first pointer
 *
 * return: alway (0)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
