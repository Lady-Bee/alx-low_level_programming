#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1length = 0;
	unsigned int s2length = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1length++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2length++;

	output = malloc(sizeof(char) * (s1length + n) + 1);
	if (output == NULL)
		return (NULL);

	if (n >= s2length)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			output[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			output[s1length + i] = s2[i];
		output[s1length + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			output[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			output[s1length + i] = s2[i];
		output[s1length + i] = '\0';
	}
	return (output);
}
