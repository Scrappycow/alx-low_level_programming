#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *str_out;
	int c, i, j, t;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	str_out = malloc((c + 1) * sizeof(char));

	if (str_out == NULL)
	{
		free(str_out);
		return (NULL);
	}

	for (i = j = t = 0; t < c; j++, t++)
	{
		if (av[i][j] == '\0')
		{
			str_out[t] = '\n';
			i++;
			t++;
			j = 0;
		}
		if (t < c - 1)
			str_out[t] = av[i][j];
	}
	str_out[t] = '\0';

	return (str_out);
}
