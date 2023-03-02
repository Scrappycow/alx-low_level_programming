#include "main.h"

/**
 * *_strcat - appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest and adds '\0'
 * @dest: resulting string
 * @src: string to be concatinated to dest string
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		J++;
	}

	dest[i] = '\0';
	return (dest);
}
