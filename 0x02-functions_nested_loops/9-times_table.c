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

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n < 10 ; n++)
		{
			answer = i * n;
			if (answer < 10)
			{
				_putchar('0' + answer);
			}
			else
			{
				_putchar('0' + answer / 10);
				_putchar('0' + answer % 10);
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
