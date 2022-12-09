single digit numbers of base 10~#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10.
 * starting from 0.
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	do {
		for (n = 0; n < 9; n++)
			putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	} while (n == 9);
	putchar('\n');
	return (0);
}
