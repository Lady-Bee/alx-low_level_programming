#include "search_algos.h"

/**
 * linear_search - linear search algorithm for arrays.
 * @array: pointer to the first element of the array
 * to search in.
 * @size: The number of array elements.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
