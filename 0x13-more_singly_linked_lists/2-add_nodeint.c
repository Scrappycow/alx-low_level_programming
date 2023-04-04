#include "lists.h"
#include <stlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: Address of the 1st node
 * @n: integer to insert into a new node
 * Return: Address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cmt;

	cmt = malloc(sizzeof(listint_t));
	if (cmt == NULL)
		return (NULL);

	cmt->n = n;
	cmt->next = *head;
	*head = cmt;
	return (*head);
}
