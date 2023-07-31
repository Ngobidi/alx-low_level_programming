#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_listint - free a listint_t list
 * where,
 * @head: first node
 * return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
