#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program
 * @message: The error message to be printed
 * @filename: The filename to include in the error message
 * @exit_code: The exit code for the program
 */
void error_exit(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}
/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The source file.
 * @file_to: The destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit("Error: Can't read from file %s\n", file_from, 98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close_file(fd_from);
		error_exit("Error: Can't write to %s\n", file_to, 99);
	}
	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			error_exit("Error: Can't write to %s\n", file_to, 99);
		}
	}
	if (n_read == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		error_exit("Error: Can't read from file %s\n", file_from, 98);
	}
	close_file(fd_from);
	close_file(fd_to);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
