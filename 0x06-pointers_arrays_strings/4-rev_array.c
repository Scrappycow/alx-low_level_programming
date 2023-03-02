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
	int tm, temp;

	for (tm = 0; tm < (n - 1) / 2; tm++)
	{
		temp = a[tm];
		a[tm] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
