#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 * @s: this points a memory area
 * @b: this is a constant byte
 * @n: number of bytes
 * Return: this is void
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0 ; n > 0 ; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
