#include "main.h"

/**
 * _puts - this prints a string followed by a new line
 * @str: the string to be printed
 * Return: this is void
 */

void _puts(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; n++)
		_putchar(str[n]);
	_putchar('\n');

}
