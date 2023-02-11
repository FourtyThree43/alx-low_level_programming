#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append text to
 * @text_content: NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;

	/* Check for a NULL filename */
	if (filename == NULL)
	{
		return (-1);
	}

	/* Open the file for writing in append mode */
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}

	/* Check for a NULL text content */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Write the text content to the end of the file */
	write_result = write(fd, text_content, _strlen(text_content));
	if (write_result == -1)
	{
		close(fd);
		return (-1);
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
