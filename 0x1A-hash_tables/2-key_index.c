#include "hash_tables.h"

/**
 * key_index - return index of a key
 * @key: key
 * @size: size array of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}