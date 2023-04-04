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
