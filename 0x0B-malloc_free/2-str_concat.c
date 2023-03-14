#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string value
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int index, index2, k, limit;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] != '\0'; index++)
		;

	for (index2 = 0; s2[index2] != '\0'; index2++)
		;

	new_str = malloc(sizeof(char) * (index + index2 + 1));

	if (new_str == NULL)
		return (NULL);

	for (k = 0; k < index; k++)
		new_str[k] = s1[k];

	limit = index2;
	for (index2 = 0; j <= limit; k++, j++)
		new_str[k] = s2[index2];

	return (new_str);
}
