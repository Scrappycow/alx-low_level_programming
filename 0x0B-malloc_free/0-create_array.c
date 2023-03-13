#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes it with a
 * specific char
 * @size: size of array
 * @c: character to initialize the array with
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *l;
	unsigned int t;

	if (size <= 0)
	{
		return (NULL);
	}
	l = malloc(sizeof(char) * size);
	if (l == NULL)
	{
		return (NULL);
	}
	for (t = 0; t < size; t++)
	{
		l[t] = c;
	}
	return (l);
}
