#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - write a new node,
 *  at the end of a linked list
 * @head: list_t list (doubled pointer used)
 * @str: string to add in the new node
 *
 * Return: always return address of the new element,
 * or NULL if list failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
