#include "main.h"

/**
 * _strncpy - this copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be used
 * Return: this is void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
		dest[a] = src[a];
	if (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}