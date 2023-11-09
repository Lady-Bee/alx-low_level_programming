#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: returns 0 when successful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	int num;

	va_start(ap, n);

	num = 0;

	for (i = 0; i < n ; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	va_end(ap);
	printf("\n");
}
