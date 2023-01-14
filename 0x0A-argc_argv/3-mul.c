#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
