#include "main.h"

/**
 * *_strchr - function finds a character in a string
 * @s: the string
 * @c: the character
 * Return: a character
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (0);
}
