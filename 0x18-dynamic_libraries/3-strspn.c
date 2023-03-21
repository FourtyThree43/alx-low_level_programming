#include "main.h"

/**
* _strspn - get length of a prefix substring
*
* @s: The string to be scanned.
* @accept: The string containing the list of characters to match in @s.
*
* Return: the number of bytes in the initial segment of @s
* which consist only of bytes from @accept
*/
unsigned int _strspn(char *s, char *accept)
{
	/* Initialize the length of the prefix to 0 */
	unsigned int length = 0;

	/* Iterate over the characters of s */
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if the current character is in the accept string */
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				/* If it is, increment the length of the prefix */
				/* and continue to the next character */
				length++;
				break;
			}
		}

		/* If the current character is not in the accept string, */
		/* return the length of the prefix */
		if (accept[j] == '\0')
		{
			return (length);
		}
	}

	/* Return the length of the prefix if the end of s is reached */
	return (length);
}
