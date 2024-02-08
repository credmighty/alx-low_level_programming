#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: the size of the array
 * Return: the created table is returned on success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
