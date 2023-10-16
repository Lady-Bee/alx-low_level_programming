#include "main.h"

/**
 * swap_int - this swaps two integers
 * @a: first value
 * @b: second value
 * Return: this is void
 */

void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
