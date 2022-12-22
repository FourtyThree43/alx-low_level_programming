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
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 'A';
		}
		i++;
	}
	/* Return a pointer to the modified string */
	return (s);
}
