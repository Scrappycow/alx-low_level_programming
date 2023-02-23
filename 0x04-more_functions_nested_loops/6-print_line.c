#include "main.h"

void print_line(int n);

/**
 * print_line - draw a straightline
 * Description: draw a straightline
 * @n: number of underscores
 * Return: Always 0.
 */
void print_line(int n)
{
	int count = 0;

	while (n < 0 && count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
