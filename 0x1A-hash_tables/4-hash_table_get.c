#include "hash_tables.h"

/**
 * hash_table_get - Recover the value of an element with key in a hash table.
 * @ht: The hash table to be retrieved.
 * @key: The element.
 * Return: The value of element associated with key, else Null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idex;
	hash_node_t *node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idex = key_index((unsigned char *)key, ht->size);
		node = ht->array[idex];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
