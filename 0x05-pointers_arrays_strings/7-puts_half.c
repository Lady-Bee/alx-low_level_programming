#include "main.h"

/**
 * puts_half - function prints half of a string
 * @str: parameter that is to be printed
 * Return: returns 0 when successful
 */

void puts_half(char *str)
{
	int i;
	int b;

	int start = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		start++;
	b = (start - 1) / 2;

	for (i = b + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');

}
