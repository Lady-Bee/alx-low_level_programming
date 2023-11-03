#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *output;
	int size;
	int n;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	output = malloc(sizeof(int) * size);

	if (output == NULL)
		return (NULL);

	for (n = 0 ; min <= max ; n++)
		output[n] = min++;

	return (output);
}
