#include "main.h"

/**
 * print_number - prints a number
 * Description: prints number
 * @n: parameter being tested
 *
 * Return: Always 0.
 */
void print_number(int n);
/**
 * print_number - prints a number
 * Description: prints number
 * @n: parameter being tested
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int new_num;

	if (n < 0)
	{
		new_num = -n;
		_putchar('_');
	}
	else
	{
		new_num = n;
	}

	if (new_num / 10)
	{
		print_number(new_num / 10);
	}
	_putchar((new_num % 10) + '0');
}
