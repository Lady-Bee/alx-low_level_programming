#include "main.h"

/**
 * print_square - Thi prints a square
 * @size: the square size
 * Return: returns 0 when successful
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int a;

		for (i = 1 ; i <= size ; i++)
		{
			for (a = 1 ; a <= size ; a++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
