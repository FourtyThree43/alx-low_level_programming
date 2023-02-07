#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
