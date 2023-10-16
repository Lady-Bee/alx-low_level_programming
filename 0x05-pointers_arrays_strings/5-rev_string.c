#include "main.h"
#include <string.h>
/**
 * rev_string - function to reverse a string
 * @s: string to be reversed
 * Return: returns 0 when successful
 */

void rev_string(char *s)
{
	int a;
	int b;
	int length = strlen(s);

	for (a = 0, b = length - 1 ; a < b ; a++, b--)
	{
		char i = s[a];

		s[a] = s[b];
		s[b] = i;
	}
}
