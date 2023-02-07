#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed
 *
 * This function uses recursion to print the binary representation of a number.
 * The rightmost bit of the number is printed first,
 * followed by the next bit, and so on.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
