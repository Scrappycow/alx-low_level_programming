#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a list
 * Return: an integer
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *fr;
	unsigned int cntr = 0;

	fr = h;
	while (fr)
	{
		printf("d\n", fr->n);
		cntr++;
		fr = fr->next;
	}
	return (cntr);
}
