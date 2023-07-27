#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * list_len - state the num of elements contained in a linked list
 * @h: list_t list (pointer)
 *
 * Return: result return num of elements in h list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
