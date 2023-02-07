#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int value to be checked.
 * @index: index of the bit to be checked, starting from 0.
 *
 * Return: the value of the bit at index index
 *          or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & (1 << index)) ? 1 : 0);
}
