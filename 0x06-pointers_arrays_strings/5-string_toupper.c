#include "main.h"

/**
 * string_toupper - changes a string's lowercase letters to uppercase
 * @i: this ia a pointer
 * Return: returns i
 */

char *string_toupper(char *i)
{
	int a;

	for (a = 0 ; i[a] != '\0' ; )
	{
		if (i[a] >= 'a' && i[a] <= 'z')
			i[a] = i[a] - 32;
		a++;
	}
	return (i);
}
