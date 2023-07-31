#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * main - check the code (pop_listint)
 *
 * Return: return to the head node data
 * return: 0 if listed list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}

