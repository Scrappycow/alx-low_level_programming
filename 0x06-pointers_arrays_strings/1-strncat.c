#include "main.h"

/**
 * *_strncat - similar to _strcat except uses nbytes for
 * source and src dores not need to be /0
 * @dest: destination for the copied string
 * @src: string to be copied
 * @n: number of bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
