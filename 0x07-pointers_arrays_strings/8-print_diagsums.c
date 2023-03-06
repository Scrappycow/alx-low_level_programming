#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the array
 * @size: diagonal size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum_one = 0;
	int sum_two = 0;

	for (index = 0; index < size; index++)
	{
		sum_one += a[(index * size) + index];
		sum_two += a[(size - 1) + ((size - 1) * index)];
	}
	printf("%d, %d\n", sum_one, sum_two);
}
