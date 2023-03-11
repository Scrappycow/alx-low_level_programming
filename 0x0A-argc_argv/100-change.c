#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: count of arguments
 * @argv: an array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int number_coins;
	int i;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	number_coins = 0;

	for (i = 0; i < 5; i++)
	{
		count = cents / coins[i];
		number_coins += count;
		cents -= count * coins[i];
	}

	printf("%d\n", number_coins);
	return (0);
}
