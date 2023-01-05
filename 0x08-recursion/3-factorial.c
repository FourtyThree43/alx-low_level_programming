#include "main.h"

/**
* factorial - calculate the factorial of a given number.
*
* @n: the number to calculate the factorial of.
*
* Return: the factorial of n, or -1 if n is less than 0 (error)
*/
int factorial(int n)
{
	/*base case: if n is 0 , return 1*/
	if (n == 0)
		return (1);

	/*base case: if n is less than 0, return -1*/
	if (n < 0)
		return (-1);

	/*recursivr step: return n multiplied by the result of*/
	/*calling the funcion with n - 1 as argument*/
	return (n * factorial(n - 1));
}
