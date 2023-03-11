#include "main.h"

/**
 * _strncat - similar to _strcat except uses nbytes for
 * source and src dores not need to be /0
 * @dest: destination for the copied string
 * @src: string to be copied
 * @n: number of bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
