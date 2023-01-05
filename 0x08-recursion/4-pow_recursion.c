#include "main.h"

/**
* _pow_recursion - calculate @x raised to the power of @y.
*
* @x: the base.
* @y: the exponent.
*
* Return: @x raised to the power of @y,
* or -1 if @y is less than 0.
*/
int _pow_recursion(int x, int y)
{
	/*base case: if y is 0, return 1*/
	if (y == 0)
		return (1);

	/*base case: if y is less than 0, return -1*/
	if (y < 0)
		return (-1);

	/*recursive step: return x muli[lied br the result of calling*/
	/*the functtion with x as base and y - 1 as exponent*/
	return (x * _pow_recursion(x, y - 1));
}
