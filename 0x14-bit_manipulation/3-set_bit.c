#include <stdio.h>

/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index of the bit to be set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned long int mask = 1UL << index;*/

	/*if (!n)*/
	if (index >= (sizeof(*n) * 8))
		return (-1);
	/**n = *n | mask;*/
	*n |= (1UL << index);
	return (1);
}
