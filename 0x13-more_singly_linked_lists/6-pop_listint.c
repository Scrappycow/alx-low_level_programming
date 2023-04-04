#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *poy;
	int n_data;

	if (*head == NULL)
		return (0);

	poy = *head;
	*head = poy->next;
	n_data = poy->n;
	free(poy);
	return (n_data);
}
