#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to a filename to be created
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * if filename =NULL
 */

int create_file(const char *filename, char *text_content)
{
	int cat, dog, goat = 0;

	if (!filename)
	{
		return (-1);
	}

	cat = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (cat < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[goat])
			goat++;
		dog = write(cat, text_content, dog);
		if (dog != goat)
		{
			return (-1);
		}
	}

	close(cat);

	return (1);
}
