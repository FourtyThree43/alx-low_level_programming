#include "main.h"

/**
 * print_numbers- prints the numbers, from 0 to 9.
 * followed by a new line.
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int i;

	for (int i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
