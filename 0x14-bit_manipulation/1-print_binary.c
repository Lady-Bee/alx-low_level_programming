#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;

	if (power == 0)
		return (1);

	while (power)
	{
		if (power & 1)
			result *= base;
		power >>= 1;
		base *= base;
	}
	return (result);
}


void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

