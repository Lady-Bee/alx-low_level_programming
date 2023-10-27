#include "main.h"

/**
 * _strcpy - function copies a string
 * @dest: this is the destination
 * @src: this is the source
 * Return: returns 0 when successful
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
