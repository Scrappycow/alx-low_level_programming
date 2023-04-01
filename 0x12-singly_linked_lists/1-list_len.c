#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *temps;
	unsigned int count = 0;

	temp = h;
	while (temps)
	{
		count++;
		temps = temps->next;
	}
	return (count);
}
