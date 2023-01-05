#include "main.h"

/**
 * _puts_recursion - print a string followed by a newline using recursion.
 *
 * @s: pointer to the string to be printed
 *
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	/*base case: if current character is NULL terminator,*/
	/*print newline and return*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*print current character and call funcion*/
	/*with next character as argument*/
	_putchar(*s);
	_puts_recursion(s + 1);
}
