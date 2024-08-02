#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - print error message and exit
 * @message : error message
 * @filename: file name
 * @code: exit code
 * Return: nothing
 */

void error_exit(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];
	char *file_from, *file_to;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit("Error: Can't read from file %s\n", file_from, 98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to %s\n", file_to, 99);
	}
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to %s\n", file_to, 99);
		}
	}
	if (n_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from file %s\n", file_from, 98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
