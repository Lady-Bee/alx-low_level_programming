#include "main.h"

/**
 * _abs - function computes the absolute value of an integer
 *@i: This parameter is checked
 * Return: returns 0 when successful
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
	return (0);
}
