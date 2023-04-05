#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the 1st node of a list.
 * @n: Integer to insert in the new node.
 * Return: new node address.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *dog, *dog2;

	dog = malloc(sizeof(listint_t));
	if (dog == NULL)
		return (NULL);

	dog->n = n;
	dog->next = NULL;

	if (*head == NULL)
	{
		*head = dog;
		return (dog);
	}

	dog2 = *head;
	while (dog2->next)
		dog2 = dog2->next;
	dog2->next = dog;
	return (dog);
}
