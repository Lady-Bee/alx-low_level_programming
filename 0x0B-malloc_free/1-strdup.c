#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *copy;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		copy[n] = str[n];
	return (copy);
}
