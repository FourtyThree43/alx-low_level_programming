#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian,
 * 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	/* If the first byte of the integer is 1, then the system is little endian */
	if (*c)
	{
		return (1);
	}
	/* Else, the system is big endian */
	return (0);
}
