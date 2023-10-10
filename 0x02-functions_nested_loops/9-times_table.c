#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, n, answer;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			answer = i * n;

			if (answer <= 9)
				_putchar(' ');
			else
				_putchar((answer / 10) + '0');

			_putchar((answer % 10) + '0');
		}
		_putchar('\n');
	}
}
