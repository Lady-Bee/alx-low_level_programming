#include "main.h"

/**
 * times_table - This function prints the 9 times table
 * Return: returns void
 */

void times_table(void)
{
	int i;
	int n;
	int answer;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 0 ; n <= 9 ; n++)
		{
			answer = i * n;

			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (answer >= 10)
			{
				_putchar('0' + answer / 10);
			}
			else
			{
				_putchar(' ');
			}
			_putchar('0' + answer % 10);
		}
		_putchar('\n');
	}
}
