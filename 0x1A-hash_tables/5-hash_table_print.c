#include "hash_tables.h"

/**
 * hash_table_print - display the elements in a given hash table.
 * @ht: The hash table.
 * Return: the value on success, else Null if ht didn't print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long j;
	char x = 1;

	if ((ht != NULL) && (ht->array != NULL))
	{
		printf("{");
		fflush(stdout);
		for (j = 0; j < ht->size; j++)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				printf("%s'%s': '%s'", x ? "" : ", ", node->key, node->value);
				fflush(stdout);
				x = 0;
				node = node->next;
			}
		}
		printf("}\n");
		fflush(stdout);
	}
}
