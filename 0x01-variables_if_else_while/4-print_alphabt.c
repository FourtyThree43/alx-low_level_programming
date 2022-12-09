#include <stdio.h>

/**
 *main - prints the lower case alphabets.
 *except q and e and new line
 *Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	do {
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
	} while (i != 'e' && i != 'q');
	putchar('\n');
	return (0);
}
