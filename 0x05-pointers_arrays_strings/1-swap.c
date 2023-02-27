#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: new value of a
 * @b: new value of b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int ab;

	ab = a;
	*a = *b;
	*b = ab;
}
