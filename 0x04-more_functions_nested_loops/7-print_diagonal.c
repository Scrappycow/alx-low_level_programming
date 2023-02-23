#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Description: prints a diagonal
 * @n: number of times the character \ is to be printed
 *
 * Return: void
 */

void print_diagonal(int n);

/**
 * print_diagonal - prints a diagonal
 * Description: prints a diagonal
 * @n: number of times the character \ is to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int fs;
	int sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (fs = 0; fs < n; fs++)
		{
			for (sp = 0; sp < n; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
