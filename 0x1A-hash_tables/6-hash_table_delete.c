#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *pointer = ht;
	hash_node_t *node, *tmp;
	unsigned long int t;

	for (t = 0; t < ht->size; t++)
	{
		if (ht->array[t] != NULL)
		{
			node = ht->array[t];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(pointer->array);
	free(pointer);
}
