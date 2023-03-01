#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to be compared
 * @s2: second dtring to be compared
 *
 * Return: result.
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 > *s2)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
