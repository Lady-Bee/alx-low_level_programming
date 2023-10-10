#include "main.h"

/**
 * print_alphabet_x10 - This function prints alphabets 10 times
 *
 * Return: returns 0 when successful
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char i;

	for (n = 0 ; n <= 10 ; n++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
