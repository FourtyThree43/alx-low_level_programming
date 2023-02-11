#include "main.h"

/**
 * main - copies content of file_from to file_to
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written, check = 1;
	char buffer[BUFFER_SIZE];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Check if the number of arguments passed is correct */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	/* Open the source file for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	/* Open the destination file for writing */
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, permissions);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	/* Read data from the source file and write to the destination file */
	while (check > 0)
	{
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		check = bytes_read;

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	}

	/* Close the source file */
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_from), exit(100);

	/* Close the destination file */
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_to), exit(100);

	return (0);
}
