#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Description: generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int total;
	char c;

	srand(time(NULL));
	while (total <= 2645)
	{
		c = rand() % 128;
		total += c;
		putchar(c);
	}
	putchar(2772 - total);
	return (0);
}
