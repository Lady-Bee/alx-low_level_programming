#include "main.h"

/**
 * _strncpy - this copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
