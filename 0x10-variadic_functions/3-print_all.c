#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function prints anything
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	char *separator = "";
	int printed = 0;

	va_start(ap, format);

	while (format && format[printed])
	{
		if (format[printed] == 'c')
		{
			printf("%s%c", separator, va_arg(ap, int));
		}
		else if (format[printed] == 'i')
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
		else if (format[printed] == 'f')
		{
			printf("%s%f", separator, va_arg(ap, double));
		}
		else if (format[printed] == 's')
		{
			const char *str = va_arg(ap, const char *);

			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}
		separator = ", ";
		printed++;
		if (format[printed] != 'c' && format[printed] != 'i' &&
		format[printed] != 'f' && format[printed] != 's')
		{
			separator = "";
		}
	}
	va_end(ap);
	printf("\n");
}
