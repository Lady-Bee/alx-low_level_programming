#include "main.h"

/**
 * print_line - This program draws a straight line
 * @n: parameter
 * Return: returns 0 when successful
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l;

		for (l = 1; l <= n ; l++)
			_putchar('_');
	}
		_putchar('\n');
}
