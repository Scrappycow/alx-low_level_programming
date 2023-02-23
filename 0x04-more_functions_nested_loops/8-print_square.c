#include "main.h"

void print_square(int size);
/**
 * print_square - prints a square
 * Description: print a square
 * @size: size of the square
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	char ch = '#';
	int size;
	int i, j;

	i = 0;
	size = 10;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(ch);
			j++;
		}
		_putchar('\n')
		i++;
	}
}
