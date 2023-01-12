/**
 * _strcmp - compares two strings.
 * @s1: string one.
 * @s2: string two.
 *
 * Return: a positive or negative value.
 */

int _strcmp(char *s1, char *s2)
{
	/*Compare each chararcter of the strings*/
	while (*s1 != '\0' && *s2 != '0')
	{
		if (*s1 != *s2)
		{
			/* Return a positive or negative value depending on */
			/* the difference between the characters */
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	/* If one of the strings is shorter, return a positive or negative value */
	/* depending on the difference between the null bytes */
	return (*s1 - *s2);
}
