#include "main.h"
#include <ctype.h>

/**
 * _isalpha - This function checks for alphabetic characters
 *@c: This parameter is checked
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if (c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
