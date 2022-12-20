#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first int.
 * @b: second int.
 *
 * Returns Void.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
