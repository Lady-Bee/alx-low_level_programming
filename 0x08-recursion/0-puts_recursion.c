#include "main.h"

/**
  * _puts_recursion - this function prints a string followed by a new line
  *
  * @s: Parameter
  *
  * Return: This is void
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	putchar('\n');
}

