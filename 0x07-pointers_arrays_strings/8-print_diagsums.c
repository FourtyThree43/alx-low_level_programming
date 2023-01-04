#include "main.h"

/**
 * print_diagsums - prints the sums of the diagonals of the matrix
 * to the standard output.
 *
 * @a: element of a square matrix.
 * @size:  size of the matrix.
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	/* Initialize the sums of the diagonals to 0 */
	int sum1 = 0, sum2 = 0;

	/* Iterate over the elements of the matrix */
	int i;

	for (i = 0; i < size; i++)
	{
		/* Add the element at the current position*/
		/*to the appropriate diagonal sum*/
		/*The expression *(a + i * size + j) is equivalent to a[i][j]*/
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}

	/* Print the sums of the diagonals */
	printf("%d, %d\n", sum1, sum2);
}
