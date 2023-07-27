#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_list - function that frees a linked list
 * @head: reguired (list_t lis)t to freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
