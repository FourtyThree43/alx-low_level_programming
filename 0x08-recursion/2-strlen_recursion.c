#include "main.h"

/**
* _strlen_recursion - calculate the length of a string.
*
* @s: pointer of the string.
*
* Return: lenth of the string.
*/
int _strlen_recursion(char *s)
{
	/*base case: if current character is null terminator, return 0*/
	if (*s == '\0')
		return (0);

	/*re crusive step: add 1 to the result of calling the function*/
	/*with next character as argument*/
	return (1 + _strlen_recursion(s + 1));
}
