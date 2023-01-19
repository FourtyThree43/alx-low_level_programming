#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter
 * on each element of an array.
 *
 * @array: the array to iterate through.
 * @size: the size of the array
 * @action: pointer to the function that takes an int as an argument.
 *
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && action && size > 0)
	{
		for (index = 0; index < size; ++index)
		{
			action(array[index]);
		}
	}

}
