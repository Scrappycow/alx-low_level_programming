#include "main.h"

void print_most_numbers(void);
/**
 * print_most_numbers - prints the numbers 0 to 9
 * Description: prints 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
		{
			continue;
		}
		else
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
