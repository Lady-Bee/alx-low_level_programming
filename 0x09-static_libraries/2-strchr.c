#include "main.h"

/**
 * _strchr - this function locates a character in a string
 * @s: this is a string
 * @c: this is a character
 * Return: returns 0 when successful
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0 ; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}

