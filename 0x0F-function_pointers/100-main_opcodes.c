#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments passed
 *
 * Return: 0 on success, 1 if the number of arguments is not correct,
 * 2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	/* check if number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);
	/* check if number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2x", main_ptr[i]);
	}
	printf("\n");
	return (0);
}
