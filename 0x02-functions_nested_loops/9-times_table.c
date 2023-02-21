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
		_putchar(',');
		_putchar(' ');
		for (cet = 0; cet <= 9 ; cet++)
		{
			d = (yet * cet);
			if ((d / 10) > 0)
			{
				-putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cet < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

