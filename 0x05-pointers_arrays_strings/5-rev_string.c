#include "main.h"

/**
 * rev_string - function reverses a string
 *
 * @s: string to be reversed
 * Return: reversed string
 */

void rev_string(char *s)
{
	char r = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		r = s[i];
		s[i] = s[count];
		s[count] = r;
	}
}
