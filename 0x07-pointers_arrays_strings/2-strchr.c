#include "main.h"

/**
* _strchr - locates a character in a string.
*
* @s: This is the c string to be scanned.
* @c: This is the character to be searched in str.
*
* Return: pointer to char c in *s, or NULL.
*/
char *_strchr(char *s, char c)
{
	/*Search for the first occurence of the characterc in string s*/
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			/*Return a pointer to the found character*/
			return (&s[i]);
	return (NULL);
}
