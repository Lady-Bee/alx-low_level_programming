#include "main.h"

/**
 * puts2 - this prints a string followed by a new line
 * @str: the string to be printed
 * Return: this is void
 */

void puts2(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0' ; n++)
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
