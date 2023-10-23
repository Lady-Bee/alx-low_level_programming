#include "main.h"

/**
 * _strpbrk - this function locates the first occurence in a string
 * @s: input
 * @accept: input
 * Return: returns 0 when successfsul
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}

