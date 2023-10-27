#include "main.h"

/**
 * _strncat - this concatenates two strings using n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be used
 * Return: this is void
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int a;

	for (a = 0 ; dest[a] ; a++)
		destlength++;

	for (a = 0 ; a < n && *src != '\0' ; a++)
	{
		dest[destlength + a] = *src;
		src++;
	}
	dest[destlength + a] = '\0';
	return (dest);
}
