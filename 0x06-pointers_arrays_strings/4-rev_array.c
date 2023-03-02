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

	for (tm = 0; tm < n--; tm++)
	{
		temp = a[tm];
		a[tm] = a[n];
		a[n] = temp;
	}
}
