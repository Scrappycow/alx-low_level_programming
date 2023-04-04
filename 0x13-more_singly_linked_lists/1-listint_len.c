#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: pointer to an integer
 * Return: Integer
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cat;
	unsigned int dog = 0;

	cat = h;
	while (cat)
	{
		dog++;
		cat = cat->next;
	}
	return (dog);
}
