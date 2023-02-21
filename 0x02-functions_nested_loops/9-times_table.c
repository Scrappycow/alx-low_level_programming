#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0 (Success)
 */

void times_table(void)
{
	int pet, cet, d;

	for (pet = 0; pet <= 9; pet++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cet = 1; cet <= 9; cet++)
		{
			d = (pet * cet);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cet  < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
