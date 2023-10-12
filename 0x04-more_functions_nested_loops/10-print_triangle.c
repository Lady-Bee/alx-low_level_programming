#include "main.h"

/**
 * print_triangle - This prints a triangle
 * @size: the square size
 * Return: returns 0 when successful
 */

void print_triangle(int size)
{
	int i = 0;
	int a;
	int t = size - 1;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (a = 0 ; a < size ; a++)
			{
				if (a < t)
					_putchar(' ');
				else
					_putchar('#');
			}
			t--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
