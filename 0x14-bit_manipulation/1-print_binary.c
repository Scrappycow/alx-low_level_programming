#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: output
 */

void print_binary(unsigned long int n)
{
	int t, count = 0;
	unsigned long int inuse;

	for (t = 63; t >= 0; t--)
	{
		inuse = n >> t;

		if (inuse & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
