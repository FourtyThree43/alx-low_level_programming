#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count.
 * @argv: pointer to argument vector.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
