#include "main.h"

/**
 * _isupper - This checks for uppercase characters
 * @c: parameter to be checked
 *
 * Return: returns 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
