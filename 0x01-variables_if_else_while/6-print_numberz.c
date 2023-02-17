#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description - function prints the numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
