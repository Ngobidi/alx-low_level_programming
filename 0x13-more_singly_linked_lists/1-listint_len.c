#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * listint_len - function returns the number of elements
 * where
 * @h: firstnode listint_t list
 * 
 * return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
