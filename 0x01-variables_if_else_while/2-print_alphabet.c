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
	char low;

	for (low = 'a' ; low <= 'z' ; low++)

	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
