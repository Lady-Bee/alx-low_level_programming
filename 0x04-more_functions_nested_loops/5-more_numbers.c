#include "main.h"

/**
 * more_numbers - This program prints from 0 - 14 ten times
 *
 * Return: returns 0 when successful
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
