#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - This function prints natural numbers
 *@n: This parameter is checked
 * Return: returns void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
