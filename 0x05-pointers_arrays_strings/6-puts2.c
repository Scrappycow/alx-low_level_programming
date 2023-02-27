#include "main.h"

/**
 * puts2- prints everyother character of a string
 * @str: string to be used
 *
 * Return: every other character of a string
 */

void puts2(char *str)
{
	int quote = 0;
	int t = 0;
	char *y = str;
	int q;

	while (*y != '\0')
	{
		y++;
		quote++;
	}
	t = quote - 1;
	for (q = 0; q <= t; q++)
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
	}
	_putchar('\n');
}
