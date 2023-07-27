#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - write a new node at the  linked list
 * @head: list_t list (double pointer used)
 * @str: new string in the node
 *
 * Return: always return the address of the new element,
 * or NULL if list fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
