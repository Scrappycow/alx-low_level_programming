#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be used
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int a, n, quote;

	quote = 0;

	for (a = 0; str[a] != 0; a++)
		quote++;

	n = (quote / 2);

	if ((quote % 2) == 1)
		n = ((quote + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
