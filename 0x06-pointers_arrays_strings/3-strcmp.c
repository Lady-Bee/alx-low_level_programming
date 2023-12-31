#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: first string value
 * @s2: second string value
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0 ; s1[a] != '\0' || s2[a] != '\0' ; a++)
	{
		if (s1[a] != s2[a])
		{
			if (s2[a] > s1[a])
				return (s1[a] - s2[a]);
			else if (s1[a] > s2[a])
				return (s1[a] - s2[a]);
		}
	}
	return (0);
}
