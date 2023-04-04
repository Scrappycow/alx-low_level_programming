#include "lists.h"
#include <stdio.h>

/**
 * free_listint - freesa a list
 * @head: Address of the 1st node
 */

void free_listint(listint_t *head)
{
	listint_t *crf1, *crf2;

	crf1 = head;
	while (crf1 != NULL)
	{
		crf2 = crf1->next;
		free(crf1);
		crf1 = crf2;
	}
}
