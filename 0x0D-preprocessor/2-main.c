#include <stdio.h>

/**
 * main - function prints the name of the file it was compiled from
 * Return: Returns 0 when successful
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
