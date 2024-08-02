#include "main.h"
/**
 * copy_file - copies the content of a file to another file
 * @src: pointer file
 * @dest: pointer file destination
 */
void copy_file(const char *src, const char *dest)
{
	int from, file_to, cp;
	char buff[1024];
	mode_t old_umask = umask(0000);

	from = open(src, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	file_to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		umask(old_umask);
		exit(99);
	}
	umask(old_umask);
	while ((cp = read(from, buff, 1024)) > 0)
		if (write(file_to, buff, cp) != cp)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	if (cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", dest);
		exit(100);
	}
}
/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of strings containing the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
