#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - sum of all the (n) of a linked list
 * main - check the code where
 * @head: firstnode
 *
 * Return: sum of (n),
 * else: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
