#include "main.h"

/**
 * _strlen - function checks the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int str_quote = 0;

	while (*s != '\0')
	{
		str_quote++;
		s++;
	}
	return (str_quote);
}
