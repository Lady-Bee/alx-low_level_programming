#include "main.h"

/**
 * reverse_array - this reverses an array of integers
 * @a: array of integers
 * @n: number of elements
 * Return: this is void
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n-- ; i++)
	{
		b = a[i];

		a[i] = a[n];
		a[n] = b;
	}
}
