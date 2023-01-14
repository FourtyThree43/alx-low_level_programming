#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count.
 * @argv: pointer to argument vector.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	printf("%s\n", argv[count]);
	return (0);
}