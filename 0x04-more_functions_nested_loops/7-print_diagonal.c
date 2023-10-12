#include "main.h"

/**
 * print_diagonal - This program draws a diagonal line
 * @n: parameter
 * Return: returns 0 when successful
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;
		int i;

		for (a = 0 ; a < n ; a++)
		{
			for (i = 0 ; i <= a ; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
