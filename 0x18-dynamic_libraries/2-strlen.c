#include "main.h"


/**
 * _strlen - this shows the length of a string
 * @s: parameter to be checked
 * Return: return string length
 */

int _strlen(char *s)
{
	int n;
	int start = 0;

	for (n = 0 ; s[n] != '\0' ; n++)
		start++;
	return (start);
}
