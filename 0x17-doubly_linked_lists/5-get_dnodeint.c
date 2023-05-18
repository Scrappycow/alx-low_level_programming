#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: int
 * Return: nth node of a dlistint_t linked list
 * or NULL if node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == num)
		{
			return (head);
		}
		num++;
		head = head->next;
	}

	return (NULL);
}
