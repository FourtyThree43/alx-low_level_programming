#include <stdio.h>

/**
 * is_palindrome - Checks if a given number is a palindrome.
 * @n: The number to check
 * Return: 1 if n is a palindrome, 0 otherwise.
 */
int is_palindrome(int n)
{
	int reversed = 0;
	int original = n;

	while (original != 0)
	{
		reversed = reversed * 10 + original % 10;
		original /= 10;
	}
	return (reversed == n);
}

/**
 * main - check the code
 *
 * Return: 0.
 */
int main()
{
	int i, j, product, max_palindrome = 0;

	for (i = 100; i <= 999; i++)
	{
		for (j = i; j <= 999; j++)
		{
			product = i * j;
			if (is_palindrome(product) && product > max_palindrome)
				max_palindrome = product;
		}
	}
	printf("%d", max_palindrome);
	return (0);
}
