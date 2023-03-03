#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input value
 *
 * Return: t value
 */

char *leet(char *t)
{
	int i, j;
	char d[] = "aAeEoOtTlL";
	char g[] = "4433007711";

	for (i = 0; *(t + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (d[j] == t[i])
				t[i] = g[j];
		}
	}
	return (t);
}
