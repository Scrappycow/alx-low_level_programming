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
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + 1] = '\0';

	return (dest);
}
