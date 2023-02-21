#include "main.h"

/**
 * main -prints the alphabet in lower case
 *
 * return: 0
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
