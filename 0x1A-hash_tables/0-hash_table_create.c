#include "hash_tables.h"

/**
 * hash_table_create - develop a hash table.
 * @size: Arrays_value
 * Return: A pointer to the newly hash table on sucess, else Null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int j;

	table = malloc(sizeof(hash_table_t));
	if (table != NULL)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array != NULL)
		{
			for (j = 0; j < size; j++)
				table->array[j] = NULL;
		}
	}
	return (table);
}
