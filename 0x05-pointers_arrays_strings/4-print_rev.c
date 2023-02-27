#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int quote = 0;
	int q;

	while (*s != '\0')
	{
		quote++;
		s++;
	}
	s--;
	for  (q = quote; q > 0; q--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
