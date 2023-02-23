#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers 0 to 9
 * Description: will print 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
