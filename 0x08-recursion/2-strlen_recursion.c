#include "main.h"

int _strlen_recursion(char *s);

/**
 * _strlen_recursion - function finds the length of a string
 * @s: the string to measure
 * using recursion
 * Return: the string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		return (length = length + 1);
	}
	return (0);
}
