#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: new size memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *output;
	unsigned int i, n = new_size;
	char *oldp = ptr;


	if (ptr == NULL)
	{
		output = malloc(new_size);
		return (output);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	output = malloc(new_size);

	if (output == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;

	for (i = 0 ; i < n ; i++)
		output[i] = oldp[i];
	free(ptr);
	return (output);
}
