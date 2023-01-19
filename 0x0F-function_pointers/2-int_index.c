#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to iterate through.
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values.
 *
 * Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	/* check if no element matches or f size <= 0*/
	/*if (array == NULL || cmp == NULL || size <= 0)*/
		/*return (-1);*/
	if (array && cmp && size > 0)
		/* iterate through array */
		for (index = 0; index < size; index++)
		{
			/* check if cmp function returns non-zero value */
			if (cmp(array[index]) != 0)
				return (index);
		}
	return (-1);
}
