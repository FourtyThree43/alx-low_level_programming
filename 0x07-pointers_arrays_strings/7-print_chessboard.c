#include "main.h"

/**
* print_chessboard - takes a 2D array of characters @a
* and prints it to the standard output in the format of a chessboard
*
* @a:2D arry.
*
* Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
	/* Iterate over the rows of the chessboard */
	int i;

	for (i = 0; i < 8; i++)
	{
		/* Iterate over the columns of the chessboard */
		int j;

		for (j = 0; j < 8; j++)
		{
			/* Print the character at the current position */
			printf("%c", a[i][j]);
		}
		/* Print a newline character after each row */
		printf("\n");
	}
}
