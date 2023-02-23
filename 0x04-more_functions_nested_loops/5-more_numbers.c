#include "main.h"

void more_numbers(void);
/**
 * more_numbers - prints the numbers 0 to 14, ten times
 * Description: prints 0 to 14, ten times
 * Return: void
 */

void more_numbers(void)
{
	int ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			{
				_putchar(ch / 10 + '0');
			}
			_putchar(ch % 10 + '0');
		}
		_putchar('\n');
	}
}
