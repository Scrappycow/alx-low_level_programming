#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number being printed
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int n, ld;

	ld = n % 10;

	_putchar(ld);
	return (0);
}
