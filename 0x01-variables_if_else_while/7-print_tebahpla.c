#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description - function prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
