#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: address of the 1st node of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *cat;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		cat = (*head)->next;
		free(*head);
		*head = cat;
	}
}
