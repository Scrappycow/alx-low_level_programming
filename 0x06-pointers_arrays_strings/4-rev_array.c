#include "main.h"

/**
 * reverse_array - reverses elements in an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int p, q;

	for (p = 0; (p < (n - 1) / 2); p++)
	{
		q = a[p];
		a[p] = a[n - 1 - p];
		a[n - 1 - p] = q;
	}
}
