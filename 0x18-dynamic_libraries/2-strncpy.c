#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of the string
 * @src: string to be copies
 * @n: number of bytes used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
