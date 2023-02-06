#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 *
 * This function uses bitwise operations
 * to print the binary representation of a number.
 * The rightmost bit of the number is printed first,
 * followed by the next bit, and so on.
 */
void print_binary(unsigned long int n)
{
	unsigned int bits_printed = 0;

	/* Check if the number is 0 */
	if (n == 0)
	{
		/* Print 0 if the number is 0 */
		putchar('0');
		return;
	}

	/*
	 * Shift the number n to the right until it is 0,
	 * while counting the number of bits that have been printed.
	 * The rightmost bit is printed first, followed by the next bit, and so on.
	 */
	while (n > 0)
	{
		/* Print the rightmost bit of the number n */
		_putchar((n & 1) + '0');
		bits_printed++;
		n >>= 1;

		/* Print a space after 8 bits have been printed for readability */
		if (bits_printed % 8 == 0)
		_putchar(' ');
	}
}
