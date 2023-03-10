#include "main.h"

/**
 * print_line - draw a straightline
 * Description: draw a straightline
 * @n: number of underscores
 * Return: void
 */

void print_line(int n);

/**
 * print_line - draw a straightline
 * Description: draw a straightline
 * @n: number of underscores
 * Return: void
 */
void print_line(int n)
{
	int count = 0;

	while (n > 0 && count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
