#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_listint_safe - frees list
 * @head: firstnode in the linked list
 * @H: freed list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t len = 0;
	int diff;
	listint_t *H;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			H = (*head)->next;
			free(*head);
			*head = H;
			len++;
		}
		else
		{
			free(*head);
			*head = NULL;
			len++;
			break;
		}
	}

	*head = NULL;

	return (len);
}
