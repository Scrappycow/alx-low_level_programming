#include <stdio.h>
#include <math.h>
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
			printf("%s", "Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("%s", "Buzz");
			putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s", "FizzBuzz");
			putchar(' ');
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
