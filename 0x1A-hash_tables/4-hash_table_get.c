>>>>>>> c99051d4262a1d008e19bcead541dd60819eea13
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a certain key.
 * @ht: the hash table you want to see into
 * @key: is the key you are looking for
 * Return: value associated with key if found, NULL = failed
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *node;
unsigned long int index;

if (ht == NULL)
	return (NULL);

index = key_index((const unsigned char *) key, ht->size);
node = ht->array[index];

while (node != NULL)
{
	if (strcmp(node->key, key) == 0)
		return (node->value);

	node = node->next;
}
return (NULL);
}
