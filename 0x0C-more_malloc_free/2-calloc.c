#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: size of array
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);

	if (output == NULL)
	{
		return (NULL);
	}
	else
	{
		return (output);
	}

}
