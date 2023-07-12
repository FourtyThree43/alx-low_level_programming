#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: is the number of elements in array
 * @value: the value to search for.
 *
 * Return: index where value is located, other wise
 *          -1 If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
