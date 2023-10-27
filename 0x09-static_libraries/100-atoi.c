#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @s: parameter to be checked
 * Return: returns 0 when successful
 */

int _atoi(char *s)
{
	int i = 0;
	int b = 0;
	int c = 0;
	int length = 0;
	int d = 0;
	int num = 0;

	while (s[length] != '\0')
	length++;

	while (i < length && d == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}
		i++;
	}
	if (d == 0)
		return (0);
	return (c);
}
