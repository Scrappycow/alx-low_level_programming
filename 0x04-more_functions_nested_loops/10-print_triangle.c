#include "main.h"


/**
 * print_triangle - prints a triangle
 * Description: prints a triangle
 * @size: parameter being measured
 *
 * Return: 0
 */
void print_triangle(int size);

/**
 * print_triangle - prints a triangle
 * Description: prints a triangle
 * @size: parameter being measured
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int sp, hs, ra;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ra = 1; ra <= size; ra++)
		{
			for (sp = size - ra; sp > 0; sp--)
			{
				_putchar(' ');
			}
			for (hs  = 0; hs < ra; hs++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
