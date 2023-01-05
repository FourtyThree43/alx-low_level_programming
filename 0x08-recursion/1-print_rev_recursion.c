#include "main.h"

/**
* _print_rev_recursion - print a string in reverse.
*
* @s: pointer to the string to be printed.
*
* Return: nothing.
*/
void _print_rev_recursion(char *s)
{
	/*base case: if current character is null terminator, return*/
	if (*s == '\0')
		return;

	/*recursive step: call funcion with next character as argument*/
	_print_rev_recursion(s + 1);
	/*print current character*/
	_putchar(*s);
}
