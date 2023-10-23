#include "main.h"

/**
 * _memcpy - this function copies a memory area
 * @dest: this is the destination memory area
 * @src: this is the starting memory area
 * @n: number of bytes
 * Return: this is void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0 ; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

