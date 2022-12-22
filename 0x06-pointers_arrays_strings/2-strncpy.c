/**
  * _strncpy - copies strings.
  *
  * @n: bytes of @src.
  * @src: pointer to source input.
  * @dest: pointer to destnation input.
  *
  * Return: pointer to the resulting string @dest.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy at most n bytes from src to the end of dest */
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* pad the remaning bytes of dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	/* Return a pointer to the resulting string dest */
	return (dest);
}
