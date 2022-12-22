/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: pointer to input char.
 * Return: @s.
 */

char *string_toupper(char *s)
{
	int i = 0;

	/* Convert each lowercase letter of the string to uppercase */
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	/* Return a pointer to the modified string */
	return (s);
}
