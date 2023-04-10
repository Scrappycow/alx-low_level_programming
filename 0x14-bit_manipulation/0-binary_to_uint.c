#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to a string of 0 to 1 chars
 * Return: converted number or 0 if
 * one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int binti = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		binti = 2 * binti + (b[i] - '0');
	}
	return (binti);
}
