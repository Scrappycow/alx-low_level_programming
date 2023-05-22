#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: parameter being checked
 * Return: is 1 if its a digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
