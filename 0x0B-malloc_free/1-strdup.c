#include <stdio.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: astring pointer
 * Return: string
 */

char *_strdup(char *str)
{
	char *new_string;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)


	new_string = (char *)malloc(sizeof(char) * (i + 1));

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
		new_string[j] = str[j];

	return (new_string);
}
