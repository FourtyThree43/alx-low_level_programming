#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success).
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
		return (0);
}
