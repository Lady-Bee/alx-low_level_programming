#include "main.h"

/**
 * print_rev - this prints a string in reverse
 * @s: this is the string to be printed
 * Return: this is void
 */

void print_rev(char *s)
{
	int n;
	int start = 0;

	for (n = 0 ; s[n] != '\0' ; n++)
		start++;
	for (n = start - 1 ; n >= 0 ; n--)
		_putchar(s[n]);
	_putchar('\n');

}
