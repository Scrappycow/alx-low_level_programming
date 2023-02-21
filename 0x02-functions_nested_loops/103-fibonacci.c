#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued Fibonacci
 * sequence terms not more 4000000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fsum;
	float total_sum;

	while (1)
	{
		fsum = fibo1 + fibo2;
		if (fsum > 4000000)
			break;

		if ((fsum % 2) == 0)
			total_sum += fsum;

		fibo1 = fibo2;
		fibo2 = fsum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
