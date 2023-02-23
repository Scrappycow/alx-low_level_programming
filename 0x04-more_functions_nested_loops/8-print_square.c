#include "main.h"

/**
 * print_square - prints a square
 * Description: print a square
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size);

/**
 * print_square - prints a square
 * Description: print a square
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for  (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(ch);
			}
		}
		_putchar('\n')
	}
}
