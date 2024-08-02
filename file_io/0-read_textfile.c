#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: path to the file
 * @letters: the numbers of letters
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);
	/* Ouverture du fichier */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* Allocation de la memoire pour le tampon */
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/* Lecture du fichier */
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Ecris sur la sortie standard */
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Nettoyage */
	free(buffer);
	close(fd);
	return (bytesWritten);
}
