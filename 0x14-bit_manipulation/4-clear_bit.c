#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index: index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is larger than the number of bits in unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* clear the bit at the given index */
	*n &= ~(1UL << index);
	return (1);
}
