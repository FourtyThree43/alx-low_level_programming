#include "main.h"

/**
 * create_file - creates a file with the specified name and content
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result;
	mode_t permissions = S_IRUSR | S_IWUSR;

	/* Check for a NULL filename */
	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file for writing, creating it if it doesn't exist, */
	/* or truncating it if it does */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, permissions);
	if (fd == -1)
		return (-1);

	/* Write the text content to the file */
	if (text_content != NULL)
	{
		write_result = write(fd, text_content, _strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file and return success */
	close(fd);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
