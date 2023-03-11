#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count of arguments
 * @argv: an array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
		return (0);
	}
}
