#include <stdio.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: astring pointer
 * Return: string
 */

char *_strdup(char *str)
{
	char new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	new_string = malloc(strlen(str) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}
	strcpy(new_string, str);
	return (new_string);
}
