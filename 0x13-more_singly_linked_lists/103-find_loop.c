#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * find_listint_loop - find loop in a linked list
 * main - check the code
 * @head: first node in the list
 *
 * Return: address of the  node where loop started
 * else null if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *H = head;
	listint_t *N = head;

	if (!head)
		return (NULL);

	while (H && N && N->next)
	{
		N = N->next->next;
	        H = H->next;
		if (N == H)
		{
			H = head;
			while (H != N)
			{
				H = H->next;
				N = N->next;
			}
			return (N);
		}
	}

	return (NULL);
}
