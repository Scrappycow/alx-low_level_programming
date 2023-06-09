#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int t;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (t = 0; t < size; t++)
		hash_table->array[t] = NULL;
	return (hash_table);
}