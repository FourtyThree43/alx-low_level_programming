#include <stdio.h>

/**
 *main - prints the lower case alphabets.
 *reveresed
 *Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
