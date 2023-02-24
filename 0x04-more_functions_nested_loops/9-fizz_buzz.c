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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
