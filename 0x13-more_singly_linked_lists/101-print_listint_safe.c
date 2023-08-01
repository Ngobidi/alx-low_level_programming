#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_listint_safe - number of node in a list with a loop
 * main - check the code
 * @head: firstnode
 *
 * Return: number of new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h_n = NULL;
	const listint_t *N_n = NULL;
	size_t counter = 0;
	size_t new_node;

	h_n = head;
	while (h_n)
	{
		printf("[%p] %d\n", (void *)h_n, h_n->n);
		counter++;
		h_n = h_n->next;
		N_n = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (h_n == N_n)
			{
				printf("-> [%p] %d\n", (void *)h_n, h_n->n);
				return (counter);
			}
			N_n = N_n->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
