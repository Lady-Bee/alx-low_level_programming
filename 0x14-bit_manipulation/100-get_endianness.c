#include "main.h"

/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte = (char *)&n;

	return ((int)*byte);
}
