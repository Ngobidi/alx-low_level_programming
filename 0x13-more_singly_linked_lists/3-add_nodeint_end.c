#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - new node at the end of the link
 * where
 * @head: pointer to the first node
 * @n: new node data
 * @a: new node
 *
 * Return:address to @a if validated
 * or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *temp = *head;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = a;

	return (a);
}
