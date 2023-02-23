#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * @c: parameter being chacked
 * Return: Always 0.
 */

int _isupper(int c);

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

/**
 * _isupper - checks for uppercase
 * @c: parameter being chacked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
