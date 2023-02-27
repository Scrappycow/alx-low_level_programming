#include "main.h"

/**
 * *_strcpy - function copies string pointed to by src
 * @dest: copy to
 * @src: source of string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = 0;
	int y = 0;

	while (*(src + 1) != '\0')
	{
		z++;
	}
	for ( ; y < 1; y++)
	{
		dest[y] = src[y];
	}
	dest[z] = '\0';
	return (dest);
}
