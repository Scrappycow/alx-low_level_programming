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
	char new_str;
	int index;
	int added;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new_str[added++] = s1[index];

	for (index = 0; s2[index]; index++)
		new_str[added++] = s2[index];

	return (new_str);
}
