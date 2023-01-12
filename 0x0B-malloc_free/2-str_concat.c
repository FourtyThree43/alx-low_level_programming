#include "main.h"

/**
 * *str_concat - concatenate two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 *
 * Return: pointer to a new string s3
 * NULL (faliure)
 *
**/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/* Get the length of s1 */
	while (s1 && s1[len1])
		len1++;
	/* Get the length of s2 */
	while (s2 && s2[len2])
		len2++;

	/* Allocate memory for the concatenated string */
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	/* Check if malloc failed to allocate memory */
	if (s3 == NULL)
		return (NULL);

	/* Concatenate s1 to the concatenated string */
	if (s1)
	{
		while (i < len1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	/* Concatenate s2 to the concatenated string */
	if (s2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	/* Add null character to the end of the concatenated string */
	s3[i] = '\0';

	/* Return the concatenated string */
	return (s3);
}
