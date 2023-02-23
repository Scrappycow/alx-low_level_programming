#include "main.h"

void print_numbers(void);
/**
 * print_numbers - prints the numbers 0 to 9
 * Description: prints 0 to 9
 * Return: void
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
