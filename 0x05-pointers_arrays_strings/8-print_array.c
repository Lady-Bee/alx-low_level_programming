#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array
 * @a: the array to be checked
 * @n: number of array elements
 * Return: returns 0 when successful
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
