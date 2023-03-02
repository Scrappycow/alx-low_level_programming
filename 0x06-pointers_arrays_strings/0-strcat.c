#include "main.h"

/**
 * _strcat - appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest and adds '\0'
 * @dest: resulting string
 * @src: string to be concatinated to dest string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src);
/**
 * _strcat - appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest and adds '\0'
 * @dest: resulting string
 * @src: string to be concatinated to dest string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (s);
}
