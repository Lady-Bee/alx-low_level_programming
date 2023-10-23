#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: returns 0 when successfsul
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int n;

	for (n = 0; n < size; n++)
	{
		sum1 = sum1 + a[n * size + n];
	}
	for (n = size - 1; n >= 0; n--)
	{
		sum2 += a[n * size + (size - n - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

