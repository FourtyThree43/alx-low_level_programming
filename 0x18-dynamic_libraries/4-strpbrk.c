#include "main.h"

/**
* _strpbrk - locates the first occurrence in the string s
* of any of the bytes in the string accept
*
* @s: string to be scanned.
* @accept: string containing the characters to match.
*
* Return: pointer to the character in @s
* that matches one of the characters in @accept,
* else NULL.
*/
char *_strpbrk(char *s, char *accept)
{
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
				/* If it is, return a pointer to the matching character */
				return (&s[i]);
			}
		}
	}

	/* Return NULL if no matching character is found */
	return (NULL);
}
