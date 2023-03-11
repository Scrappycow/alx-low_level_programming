#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count of arguments
 * @argv: an array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, j, t;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		int t = atoi(argv[arg]);

		if (t < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += t;
	}

	printf("%d\n", sum);
	return (0);
}
