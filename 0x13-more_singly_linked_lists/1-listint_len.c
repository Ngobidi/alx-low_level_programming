#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * listint_len - function returns the number of elements
 * where
 * @h: listint_t list
 * @num: number of nodes
 * return: always (num)
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (number);
}
