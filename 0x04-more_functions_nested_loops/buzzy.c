#include "main.h"
/**
 * main - Entry point
 * Description: Fizz (x3), Buzz(x5), FizzBuzz(in x3 & x5)
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
		{
			if (i > 9 && i <= 99)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			_putchar(' ');
		}
	}
	return (0);
}
