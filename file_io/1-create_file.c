#include "main.h"

/**
 * create_file - creates a file
 * @filename: path to the file
 * @text_content: the content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int print;
	int len = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	print = write(file, text_content, len);
	if (print == -1 || print != len)
	{
		close(file);
		return (-1);
	}
	return (1);
}
