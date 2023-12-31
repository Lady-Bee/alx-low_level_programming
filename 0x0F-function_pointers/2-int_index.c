#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: the array to be searched
 * @size: size of the array
 * @cmp:  pointer to the function to be used to compare values
 * Return: -1 or index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);

}
