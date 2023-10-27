#include "main.h"

/**
 * _strcat - this concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int n;

	for (n = 0 ; dest[n] != '\0' ; n++)
		destlength++;
	for (n = 0 ; src[n] != '\0' ; n++)
		srclength++;
	for (n = 0 ; n <= srclength ; n++)

		dest[destlength + n] = src[n];
	return (dest);
}
