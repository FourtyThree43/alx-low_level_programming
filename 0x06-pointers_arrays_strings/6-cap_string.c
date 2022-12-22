/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: pionter to input char.
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	/* Capitalize the first letter of the string */
	if (*s >= 'a' && *s <= 'z')
	{
		*s = *s - 'a' + 'A';
	}

	/* Capitalize the first letter of each subsequent word */
	while (*s != '\0')
	{
		if (*s == ' ' ||
			*s == '\t' ||
			*s == '\n' ||
			*s == ',' ||
			*s == ';' ||
			*s == '.' ||
			*s == '!' ||
			*s == '?' ||
			*s == '"' ||
			*s == '(' ||
			*s == ')' ||
			*s == '{' ||
			*s == '}')
		{
			s++;
			if (*s >= 'a' && *s <= 'z')
			{
				*s = *s - 'a' + 'A';
			}
		}
		else
		{
			s++;
		}
	}

	/* Return a pointer to the modified string */
	return (s);
}
