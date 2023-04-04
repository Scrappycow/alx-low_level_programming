#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: Address of the 1st node in a list.
 * @index: Position of a the node to find (from 0).
 * Return: Node address.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;

	if (head == NULL)
		return (NULL);
	for (t = 0; t < index; t++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
