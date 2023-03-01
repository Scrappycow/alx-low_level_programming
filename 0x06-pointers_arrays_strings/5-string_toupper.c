#include "main.h"

/**
 * _strlen - function that finds the length of a string
 * @s: pointer of the string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}


/**
 * *string_toupper - function that changes all lowercase letters of a
 * string to uppercase
 * @str: pointer to a string
 * Return: Always 0.
 */

char *string_toupper(char *str[])
{
	int i;
	int n = _strlen(str);

	for (i = 0; i < n; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
}
