#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     from 0-14.
 * @n: The value of the times table.
 */
void print_times_table(int n)
{
	int num, multi, prd;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				prd = num * multi;

				if (prd <= 99)
					_putchar(' ');
				if (prd <= 9)
					_putchar(' ');

				if (prd >= 100)
				{
					_putchar((prd / 100) + '0');
					_putchar(((prd / 10)) % 10 + '0');
				}
				else if (prd <= 99 && prd >= 10)
				{
					_putchar((prd / 10) + '0');
				}
				_putchar((prd % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
