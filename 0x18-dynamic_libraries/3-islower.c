#include "main.h"
#include <ctype.h>

/**
 * _islower - This function checks for small letters
 *@c: This parameter is checked
 * Return: returns 0 when successful
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
