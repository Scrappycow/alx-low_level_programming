#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a
 * douvle linked list
 * @h: start of linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t t;

	for (t = 0; h != NULL; t++)
	{
		h = h->next;
	}
	return (t);
}
