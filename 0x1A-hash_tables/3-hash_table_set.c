#include "hash_tables.h"

/**
 * str_copy - drive a copy of a given str.
 * @s: The str to copy.
 * key must not empty str but value can be.
 * if collision occur, add the new node at the beginning of the list
 * Return: 1 on sucess, else 0.
 */

char *str_copy(const char *s)
{
	int j, len;
	char *s_copy = NULL;

	if (s != NULL)
	{
		len = strlen(s);
		s_copy = malloc(sizeof(char) * (len + 1));
		if (s_copy != NULL)
		{
			for (j = 0; j < len; j++)
				s_copy[j] = s[j];
			s_copy[j] = '\0';
		}
	}
	return (s_copy);
}

/**
 * hash_table_set - insert an element to a given hash table.
 * @ht: The hash_table
 * @key: The key of the element to add in the list
 * @value: The value of the element to add in the list
 * Return: 1 on successful, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long idex;
	hash_node_t *p = NULL, *new_node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idex = key_index((unsigned char *)key, ht->size);
		p = ht->array[idex];
		while (p != NULL)
		{
			if (strcmp(p->key, key) == 0)
			{
				free(p->value);
				p->value = str_copy(value);
				return (1);
			}
			p = p->next;
		}
		p = ht->array[idex];
		new_node = malloc(sizeof(hash_node_t));
		if (new_node != NULL)
		{
			new_node->key = str_copy(key);
			new_node->value = str_copy(value);
			new_node->next = p;
			ht->array[idex] = new_node;
			return (1);
		}
	}
	return (0);
}
