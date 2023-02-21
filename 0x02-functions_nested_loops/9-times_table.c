#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0 (Success)
 */

void times_table(void)
{
	int yet, cet, d;

	for (yet = 0; yet <= 9; yet++)
	{
		_putchar('0');
		for (cet = 0; cet <= 9 ; cet++)
		{
			_putchar(',');
			_putchar(' ');

			d = (yet * cet);

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}

