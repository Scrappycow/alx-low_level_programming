#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: the number being checked
 * Return: 1 and prints + if n is greater than zero
 * 0  and prints 0 if n is zero
 * -1 and prints - if n is less tha zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
