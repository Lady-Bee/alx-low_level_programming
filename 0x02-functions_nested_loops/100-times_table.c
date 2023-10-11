#include "main.h"

/**
 * print_times_table - prints input's times table
 * @n: parameter to be checked
 * Return: returns void
 */

void print_times_table(int n)
{
	int i, j, answer;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				answer = i * j;

				if (answer <= 99)
					_putchar(' ');
				if (answer <= 9)
					_putchar(' ');

				if (answer >= 100)
				{
					_putchar((answer / 100) + '0');
					_putchar(((answer / 10)) % 10 + '0');
				}
				else if (answer <= 99 && answer >= 10)
				{
					_putchar((answer / 10) + '0');
				}
				_putchar((answer % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
