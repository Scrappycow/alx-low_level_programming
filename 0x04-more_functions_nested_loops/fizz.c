#include <stdio.h>
#include <math.h>

/**
 * main - FizzBuzz test
 * Description: Fizz (x3), Buzz(x5), FizzBuzz(in x3 & x5)
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char Fizz, Buzz, FizzBuzz;

	i = 0;
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
			printf("%d", i);
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
