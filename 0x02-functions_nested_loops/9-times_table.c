#include "main.h"

/**
 * times_table - This function prints the 9 times table
 * Return: returns void
 */

void times_table(void)
{
	int i;
	int n = 9;

	int answer;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 0 ; n <= 9 ; n++)
		{
			answer = i * n;
			if (answer >= 10)
			{
				_putchar('0' + answer / 10);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + answer % 10);

			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
