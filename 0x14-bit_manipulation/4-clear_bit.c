#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index of bit to set
 * Return: 1 if successful, -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
