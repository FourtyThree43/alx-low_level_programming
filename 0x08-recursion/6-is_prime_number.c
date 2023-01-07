#include "main.h"

/**
 * is_prime_ops - detects if an input number is a prime number or not.
 *
 * @n: the number to check.
 * @k: iterator.
 *
 * Return: 11 if n is prime, 0 otherwise.
*/
int is_prime_ops(unsigned int n, unsigned int k)
{
	if (n % k == 0)
	{
	if (n == k)
	return (1);
	else
	return (0);
	}
	return (0 + is_prime_ops(n, k + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number or notx.
 *
 * @n: the number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_ops(n, 2));
}
