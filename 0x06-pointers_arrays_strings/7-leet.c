#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n);
{
	int i, j;
	char d[] = "aAeEoOtTlL";
	char g[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (d[j] == n[i])
			{
				n[i] = g[j];
			}
		}
	}
	return (n);
}
