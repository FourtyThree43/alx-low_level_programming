#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if
 *         there is one or more characters in the string @b that is not 0 or 1
 *         or if @b is a null pointer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* variable to store the converted number */
	int i; /* variable to keep track of the current position in the string */

	/* Check if the input b is a null pointer */
	if (b == NULL)
	{
		/* Return 0 if the input b is a null pointer */
		return (0);
	}

	/* Loop through the string b until the null character is encountered */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check if the current character is not 0 or 1 */
		if (b[i] != '0' && b[i] != '1')
		{
			/* Return 0 if the current character is not 0 or 1 */
			return (0);
		}

		/*
		* Shift the result to the left by one place and add the current binary digit
		* The binary digit is obtained by subtracting '0' from the current character
		* which ensures that '0' is converted to 0 and '1' is converted to 1.
		*/
		result = (result << 1) + (b[i] - '0');
	}

	/* Return the converted number */
	return (result);
}
