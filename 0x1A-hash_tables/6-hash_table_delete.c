#include "hash_tables.h"

/**
 * hash_table_delete - Remove a hash table.
 * @ht: The source hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *p = NULL;
	unsigned long j;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (j = 0; j < ht->size; j++)
			{
				node = ht->array[j];
				while (node != NULL)
				{
					p = node->next;
					if (node->key != NULL)
						free(node->key);
					if (node->value != NULL)
						free(node->value);
					free(node);
					node = p;
				}
			}
			if (ht->array != NULL)
				free(ht->array);
		}
		free(ht);
		ht = NULL;
	}
}
