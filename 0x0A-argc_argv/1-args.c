#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
