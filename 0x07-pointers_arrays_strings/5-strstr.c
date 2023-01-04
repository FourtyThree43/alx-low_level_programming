#include "main.h"

/**
 * _strstr - finds the first occurrence of the sub-string s2 in the string s1.
 *
 * @haystack: string s1.
 * @needle: string s2.
 *
 * Return: pointer to the beginning of the located substring.
 * else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	/* Iterate over the characters of haystack */
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/*Check if the current char is the first char of the needle string*/
		if (haystack[i] == needle[0])
		{
			/*If it is, compare the remaining characters of the needle string*/
			int j;

			for (j = 0; needle[j] != '\0'; j++)
			{
				/* Return NULL if any of the characters do not match */
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			/* Return a pointer to the beginning of the located substring*/
			/*if all characters match */
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}

	/* Return NULL if the substring is not found */
	return (NULL);
}
