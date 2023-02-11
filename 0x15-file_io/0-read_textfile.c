#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *                 to the POSIX standard output.
 * @filename: pointer to the name of the file to read.
 * @letters: number of letters to read and print.
 *
 * Return: actual number of letters it could read and print,
 *         or 0 on failure,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_bytes, written_bytes;

	/* Check for a NULL filename */
	if (filename == NULL)
		return (0);

	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for the buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read the specified number of letters from the file */
	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
		return (0);

	/* Write the read data to the standard output */
	written_bytes = write(STDOUT_FILENO, buf, read_bytes);
	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* Clean up and return the number of read bytes */
	free(buf);
	close(fd);
	return (read_bytes);
}
