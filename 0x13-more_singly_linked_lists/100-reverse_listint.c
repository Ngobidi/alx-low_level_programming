#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint - deleted node
 * main - check the code
 * @head: firstnode
 *
 * Return: Always at the first node of the reverse list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
