#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @c: parameter being checked
 * Return: Always 0.
 */
int _isdigit(int c);

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
/**
 * _isdigit - checks if character is a digit
 * @c: parameter being checked
 * Return: is 1 if its a digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
