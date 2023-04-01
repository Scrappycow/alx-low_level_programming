#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temps, *temps2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temps = malloc(sizeof(list_t));
	if (temps == NULL)
		return (NULL);

	temps->str = strdup(str);
	if (temps->str == NULL)
	{
		free(temps);
		return (NULL);
	}
	while (str[length])
		length++;
	temps->len = length;
	temps->next = NULL;

	if (*head == NULL)
	{
		*head = temps;
		return (temps);
	}

	temps2 = *head;
	while (temps2->next)
		temps2 = temps2->next;
	temps2->next = temps;
	return (temps);
}
