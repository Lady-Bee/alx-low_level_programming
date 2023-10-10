#include "main.h"
/**
 * print_last_digit - This function prints the last digit
 *@c: This parameter is checked
 * Return: returns 0 when successful
 */

int print_last_digit(int c)
{
	int lastdig;

	lastdig = c % 10;
	if (c < 0)
		lastdig = -lastdig;
	_putchar(lastdig + '0');
	return (lastdig);
}
