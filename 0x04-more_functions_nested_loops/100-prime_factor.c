#include <stdio.h>

/**
 * primeFactors - finds the largest prime factor
 * Description: finds the largest prime number
 * @pn: prime factor being tested
 * Return: void
 */

void primeFactors(long long pn);

/**
 * main - entry point
 * Description: calls primeFactors
 * Return: always 0 (Success)
 */

int main(void)
{
	primeFactors(612852475143);
	return (0);
}

/**
 * primeFactors - finds the largest prime factor
 * Description: finds the largest prime number
 * @pn: prime factor being tested
 * Return: void
 */

void primeFactors(long long pn)
{
	long long pn;
	long long factor = 2;
	long long largest_factor = 0;

	while (pn > 1)
	{
		if (pn % factor == 0)
		{
			if (factor > largest_factor)
			{
				largest_factor = factor;
			}
			pn /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%lld\n", largest_factor);
}
