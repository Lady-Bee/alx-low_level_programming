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

	char *str, *separator = "";
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
				str = va_arg(args, char *);

				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				printed++;
				continue;
		}
		separator = ", ";
		printed++;
	}
	printf("\n");
	va_end(args);
}
