#include "main.h"

/**
 * append_text_to_file - add text at the end of file
 * @filename: name of file
 * @text_content: content add at end of the file
 * Return: return 1 for success or -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int print;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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

	close(file);

	if (print == -1 || print != len)
		return (-1);

	return (1);
}
