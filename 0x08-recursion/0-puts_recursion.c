#include "main.h"

/**
 * _puts_recursion - function recurses through a string s
 * @s: thr string to recurse
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
