#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: 1st node address.
 * @idx: is the index of the list where the new node should be added
 * from 0
 * @n: address of the new node.
 * Return: Address of the new node or NULL = failure.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cat;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		cat = *head;
		for (; i < idx - 1 && cat != NULL; i++)
			cat = cat->next;
		if (cat == NULL)
			return (NULL);
	}
	new_node1 = malloc(sizzeof(listint_t));
	if (new_node1 == NULL)
		return (NULL);
	new_node1->n = n;
	if (idx == 0)
	{
		new_node1->next = *head;
		*head = new_node1;
		return (new_node1);
	}
	new_node1->next = cat->next;
	cat->next = new_node1;
	return (new_node1);
}
