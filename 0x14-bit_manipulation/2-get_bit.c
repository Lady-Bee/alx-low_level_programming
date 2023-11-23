#include"main.h"

/**
 * get_bit - function returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index of the bit you want to get
 * Return: value of the bit, or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
