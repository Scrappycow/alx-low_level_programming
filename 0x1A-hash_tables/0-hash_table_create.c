#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: array size
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int t;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		return (NULL);
	}
	for (t = 0; t < size; t++)
		new_hash_table->array[t] = NULL;

	return (new_hash_table);
}
