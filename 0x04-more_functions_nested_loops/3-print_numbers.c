#include "main.h"

/**
 * print_numbers - This program prints from 0 -9 followed by a new line
 *
 * Return: returns 0 when successful
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
