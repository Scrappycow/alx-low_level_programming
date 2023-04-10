#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * filename = NULL or write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int cat;
	int dog, goat;
	char *big;

	if (!filename)
		return (0);
	cat = open(filename, O_RDONLY);
	if (cat < 0)
		return (0);
	big = malloc(sizeof(char) * letters);
	if (!big)
		return (0);
	dog = read(cat, big, letters);
	if (dog < 0)
	{
		free(big);
		return (0);
	}
	big[dog] = '\0';
	close(cat);
	goat = write(STDOUT_FILENO, big, dog);
	if (goat < 0)
	{
		free(big);
		return (0);
	}
	free(big);
	return (goat);
}
