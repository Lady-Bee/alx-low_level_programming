#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;

	char *separator = "";
	int printed = 0;

	va_start(args, format);

	while (format && format[printed])
	{
		switch (format[printed])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					const char *str = va_arg(args, const char *);
					
					if (str == NULL)
						printf("%s(nil)", separator);
					else
						printf("%s%s", separator, str);
					break;
				}
		}
		separator = ", ";
		printed++;

		if (format[printed] != 'c' && format[printed] != 'i' &&
		format[printed] != 'f' && format[printed] != 's')
		{
			separator = "";
		}
	}
	printf("\n");
	va_end(args);
}
