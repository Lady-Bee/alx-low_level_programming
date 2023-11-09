#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function returns the sum of all it's parameters
 * @n: parameter
 * Return: returns 0 when successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
