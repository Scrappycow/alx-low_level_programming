#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of
 * the file
 * Return: -1 if filename is NULL or
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cat, dog, pig = 0;

	if (!filename)
	{
		return (-1);
	}
	cat = open(filename, O_WRONLY | O_APPEND);
	if (cat < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[pig])
			pig++;
		dog = write(cat, text_content, pig);
		if (dog != pig)
		{
			return (-1);
		}
	}

	close(cat);

	return (1);
}
