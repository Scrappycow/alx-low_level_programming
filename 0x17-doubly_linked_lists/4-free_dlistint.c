#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
