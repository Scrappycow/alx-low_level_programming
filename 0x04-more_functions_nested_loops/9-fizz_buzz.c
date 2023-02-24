#include <stdio.h>
#include <math.h>

/**
 * main - Entry point and prints strings and integers
 * Description: prints Fizz (x3), prints Buzz(x5), prints FizzBuzz(in x3 & x5)
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%s", "Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else
		{
			if (i > 9 && i <= 99)
			{
				putchar(i / 10 + '0');
			}
			putchar(i % 10 + '0');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
